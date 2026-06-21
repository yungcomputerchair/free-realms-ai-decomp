// addr: 0x01336d20
// name: Game_setup
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 __thiscall Game_setup(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  void *pvVar8;
  int *piVar9;
  bool *pbVar10;
  int iVar11;
  undefined1 local_480 [32];
  int local_460;
  int local_45c [2];
  int local_454;
  undefined1 local_450 [4];
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  int *local_434;
  int *local_430;
  undefined4 local_42c;
  void *local_428;
  void *local_424;
  undefined1 local_41d;
  undefined1 *local_41c;
  void *local_418;
  undefined1 *puStack_414;
  int local_410;
  undefined1 local_40c [4];
  undefined4 ***local_408 [5];
  uint local_3f4;
  char local_3f0 [1000];
  uint local_8;
  
                    /* Performs initial game setup using a seed, validates player order/account
                       vectors, creates RNGs, players, account prefs, setup display actions,
                       starting objects, and marks the game setup flag. Evidence: cwgame.cpp strings
                       "in Game Setup", "gameIsSetup == true", seed logs, and setup display
                       emissions. */
  local_410 = 0xffffffff;
  puStack_414 = &LAB_0167b763;
  local_418 = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)local_40c;
  local_41c = &stack0xfffffb70;
  ExceptionList = &local_418;
  local_434 = param_1;
  local_8 = uVar2;
  if ((char)param_1[0x5f] == '\x01') {
    local_41c = &stack0xfffffb70;
    Game_logGeneral(param_1,"gameIsSetup == true",uVar2);
    local_41d = 0;
  }
  else {
    local_41d = 0;
    iVar11 = 0;
    local_410 = 0;
    local_430 = (int *)Game_getMyPlayerID(param_1);
    if (param_2 == 0) {
      Game_logGeneral(param_1,"CW_ERROR: NO SEED PASSED IN!",uVar2);
    }
    else {
      Game_logGeneral(param_1,"CW_ERROR: SEED IS %d",param_2);
    }
    uVar2 = param_1[0x19] << 8;
    local_424 = Mem_Alloc(0x9cc);
    local_410._0_1_ = 1;
    if (local_424 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)MersenneTwister_ctor();
    }
    local_410._0_1_ = 0;
    param_1[0x4d] = (int)pvVar3;
    MTRandom_seed(pvVar3,uVar2);
    param_1[0x60] = uVar2;
    local_424 = Mem_Alloc(0x9cc);
    local_410._0_1_ = 2;
    if (local_424 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)MersenneTwister_ctor();
    }
    local_410 = (uint)local_410._1_3_ << 8;
    param_1[0x4e] = (int)pvVar3;
    MTRandom_seed(pvVar3,uVar2);
    Game_writeGameLog(param_1,"setup\t%d",uVar2);
    piVar7 = param_1;
    Game_writeGameLog(param_1,"matchStructure\t%d",param_1[0xd3]);
    Game_logGeneral(param_1,"in Game Setup",piVar7);
    iVar4 = StdVector_size(param_1 + 0x5b);
    if (iVar4 == 0) {
      FUN_012f5a60("mOrderedAccountIDs.size()","..\\common\\rules\\game\\cwgame.cpp",0x2db);
    }
    iVar4 = StdVector_size(param_1 + 0x5b);
    if (iVar4 != param_1[0x55]) {
      FUN_012f5a60("mOrderedAccountIDs.size() == (unsigned int)mPlayerCount",
                   "..\\common\\rules\\game\\cwgame.cpp",0x2dc);
    }
    iVar4 = StdVector_size(param_1 + 0x57);
    if (iVar4 != param_1[0x55]) {
      FUN_012f5a60("mPlayerOrderData.size() == (unsigned int)mPlayerCount",
                   "..\\common\\rules\\game\\cwgame.cpp",0x2dd);
    }
    if (1 < param_1[0x55]) {
      for (; local_460 = iVar11, iVar11 < param_1[0x55]; iVar11 = iVar11 + 1) {
        local_424 = Mem_Alloc(100);
        local_410._0_1_ = 3;
        if (local_424 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = CWPlayer_ctor();
        }
        local_410 = (uint)local_410._1_3_ << 8;
        (**(code **)(*param_1 + 0x244))(uVar5);
        puVar6 = (undefined4 *)FUN_01260d40(iVar11);
        GamePlayer_setAccountId(*puVar6);
      }
      local_42c = 0;
      local_444 = 0;
      puVar6 = (undefined4 *)FUN_0041f5d2(&local_43c);
      local_444 = *puVar6;
      local_440 = puVar6[1];
      local_454 = 0;
      puVar6 = (undefined4 *)FUN_0041f3a1(&local_43c);
      local_42c = *puVar6;
      local_428 = (void *)puVar6[1];
      while( true ) {
        cVar1 = FUN_00416f86(&local_444);
        if (cVar1 == '\0') break;
        piVar7 = (int *)FUN_01240910();
        pvVar3 = PlayArea_findPlayerElementById(param_1,*piVar7);
        iVar11 = local_454;
        puVar6 = StdVector_atElementPtr4(param_1 + 0x5b,local_454);
        GamePlayer_setAccountId(*puVar6);
        local_454 = iVar11 + 1;
        piVar7 = (int *)unknown_getField30(pvVar3);
        FUN_012fa910();
        local_410._0_1_ = 4;
        iVar11 = GamePlayer_getAccountId();
        pvVar8 = Game_getPlayerDisplayName(local_480,iVar11);
        local_410._0_1_ = 5;
        PropertyValue_setString(pvVar8);
        local_410._0_1_ = 4;
        FUN_0041f1d7();
        (**(code **)(*piVar7 + 0x10))(1,local_450);
        Player_sendAccountPreferences(pvVar3);
        local_410 = (uint)local_410._1_3_ << 8;
        FUN_01300cd0();
        FUN_012fb740(&local_43c,0);
      }
    }
    local_424 = Mem_Alloc(0x14);
    local_410._0_1_ = 6;
    if (local_424 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_012f9eb0();
    }
    local_410 = (uint)local_410._1_3_ << 8;
    FUN_012f8c70(0x60);
    iVar11 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar3,iVar11);
    DisplayActionBuilder_addIntArg(pvVar3,param_1[0x4f]);
    piVar7 = local_430;
    (**(code **)(*param_1 + 0x150))(local_430,pvVar3);
    local_44c = 0;
    local_43c = 0;
    puVar6 = (undefined4 *)FUN_01269090(&local_444);
    local_43c = *puVar6;
    local_438 = puVar6[1];
    puVar6 = (undefined4 *)FUN_01269060(&local_444);
    local_44c = *puVar6;
    local_448 = puVar6[1];
    while( true ) {
      cVar1 = FUN_01268ea0(&local_43c);
      if (cVar1 == '\0') break;
      FUN_01268e40();
      local_430 = (int *)GamePlayer_getAccountId();
      piVar9 = IntDefaultMap_getOrInsert(param_1 + 0x8c,(int *)&local_430);
      *piVar9 = 0;
      local_45c[0] = GamePlayer_getPlayerId();
      piVar9 = IntDefaultMap_getOrInsert(param_1 + 0x92,local_45c);
      *piVar9 = 0;
      local_424 = (void *)GamePlayer_getPlayerId();
      pbVar10 = IntToBoolMap_getOrInsert(param_1 + 0x96,&local_424,piVar7);
      *pbVar10 = false;
      if (0 < param_1[0x91]) {
        local_428 = Mem_Alloc(0x14);
        local_410._0_1_ = 7;
        if (local_428 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = (void *)FUN_012f9eb0();
        }
        local_410 = (uint)local_410._1_3_ << 8;
        FUN_012f8c70(0x44);
        DisplayActionBuilder_addIntArg(pvVar3,param_1[5]);
        iVar11 = GamePlayer_getPlayerId();
        DisplayActionBuilder_addIntArg(pvVar3,iVar11);
        DisplayActionBuilder_addIntArg(pvVar3,param_1[0x91]);
        (**(code **)(*param_1 + 0x154))(pvVar3);
      }
      FUN_0132e500(&local_444,0);
    }
    local_428 = Mem_Alloc(0x14);
    local_410._0_1_ = 8;
    if (local_428 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_012f9eb0();
    }
    local_410._0_1_ = 0;
    FUN_012f8c70(0x15);
    iVar11 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar3,iVar11);
    FUN_01356600(local_40c);
    local_410._0_1_ = 9;
    if (local_3f4 < 0x10) {
      local_408[0] = local_408;
    }
    _sprintf(local_3f0,"Turn: 0 Match: %s",local_408[0]);
    DisplayActionBuilder_addCStringArg(pvVar3,local_3f0);
    (**(code **)(*param_1 + 0x154))(pvVar3);
    local_428 = Mem_Alloc(0x14);
    local_410._0_1_ = 10;
    if (local_428 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_012f9eb0();
    }
    local_410._0_1_ = 9;
    FUN_012f8c70(0x74);
    iVar11 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar3,iVar11);
    DisplayActionBuilder_addIntArg(pvVar3,0x29);
    DisplayActionBuilder_addIntArg(pvVar3,0);
    (**(code **)(*param_1 + 0x154))(pvVar3);
    local_428 = Mem_Alloc(0x150);
    local_410._0_1_ = 0xb;
    if (local_428 == (void *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)CWCard_ctor();
    }
    local_410._0_1_ = 9;
    (**(code **)(*piVar7 + 0x44))(param_1,0);
    (**(code **)(*piVar7 + 0xb4))(0x5f6303b);
    iVar11 = PlayElement_getId();
    param_1[0xea] = iVar11;
    (**(code **)(*piVar7 + 0x198))(0);
    *(undefined1 *)(param_1 + 0x5f) = 1;
    (**(code **)(*param_1 + 0xa4))();
    (**(code **)(*param_1 + 0x220))();
    local_41d = 1;
    local_410 = (uint)local_410._1_3_ << 8;
    FUN_0041f1d7();
  }
  ExceptionList = local_418;
  return local_41d;
}

