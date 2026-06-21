// addr: 0x0136dbd0
// name: Game_setup
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_setup(void * this, int seedOrTime_) */

bool __thiscall Game_setup(void *this,int seedOrTime_)

{
  undefined1 *puVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  __time64_t _Var8;
  undefined4 uVar9;
  undefined1 local_488 [32];
  undefined1 local_468 [4];
  undefined1 local_464 [8];
  int local_45c;
  int local_458;
  int local_454;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  int *local_43c;
  int local_438;
  int local_434;
  void *local_430;
  undefined4 local_42c;
  void *local_428;
  void *local_424;
  undefined1 local_41d;
  undefined1 *local_41c;
  void *local_418;
  undefined1 *puStack_414;
  uint local_410;
  undefined1 local_40c [4];
  undefined4 **local_408 [5];
  uint local_3f4;
  char local_3f0 [1000];
  uint local_8;
  
                    /* Performs initial game setup, creating randomizers, players/order data,
                       sending setup phase messages, validating ordered account/player counts, and
                       marking the game ready/setup. Returns false if already setup. */
  local_410 = 0xffffffff;
  puStack_414 = &LAB_016807a8;
  local_418 = ExceptionList;
  local_8 = DAT_01b839d8 ^ (uint)local_40c;
  local_41c = &stack0xfffffb68;
  ExceptionList = &local_418;
  local_430 = this;
  if (*(char *)((int)this + 0x17c) == '\x01') {
    local_41c = &stack0xfffffb68;
    Game_logGeneral(this,"gameIsSetup == true",local_8);
    local_41d = 0;
  }
  else {
    local_41d = 0;
    local_410 = 0;
    puVar1 = &stack0xfffffb68;
    if (seedOrTime_ == 0) {
      _Var8 = __time64((__time64_t *)0x0);
      seedOrTime_ = (int)_Var8;
      puVar1 = local_41c;
    }
    local_41c = puVar1;
    local_424 = Mem_Alloc(0x9cc);
    local_410._0_1_ = 1;
    if (local_424 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)MersenneTwister_ctor();
    }
    local_410._0_1_ = 0;
    *(void **)((int)this + 0x134) = pvVar3;
    MTRandom_seed(pvVar3,seedOrTime_);
    *(int *)((int)this + 0x180) = seedOrTime_;
    local_424 = Mem_Alloc(0x9cc);
    local_410._0_1_ = 2;
    if (local_424 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)MersenneTwister_ctor();
    }
    local_410._0_1_ = 0;
    *(void **)((int)this + 0x138) = pvVar3;
    MTRandom_seed(pvVar3,seedOrTime_);
    pvVar3 = this;
    Game_writeGameLog(this,"setup\t%d",seedOrTime_);
    Game_logGeneral(this,"in Game Setup",pvVar3);
    local_424 = Mem_Alloc(0x14);
    local_410._0_1_ = 3;
    if (local_424 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_012f9eb0();
    }
    local_410._0_1_ = 0;
    FUN_012f8c70(0x15);
    DisplayActionBuilder_addIntArg(pvVar3,*(int *)((int)this + 0x14));
    FUN_01356600(local_40c);
    local_410 = CONCAT31(local_410._1_3_,4);
    if (local_3f4 < 0x10) {
      local_408[0] = local_408;
    }
    _sprintf(local_3f0,"MatchID: %s Turn: 0 PhaseName: Setup",local_408[0]);
    DisplayActionBuilder_addCStringArg(pvVar3,local_3f0);
    (**(code **)(*(int *)this + 0x154))(pvVar3);
    iVar4 = StdVector_size((void *)((int)this + 0x16c));
    if (iVar4 == 0) {
      FUN_012f5a60("mOrderedAccountIDs.size()","..\\common\\common\\game\\Game.cpp",0x748);
    }
    iVar4 = StdVector_size((void *)((int)this + 0x16c));
    if (iVar4 != *(int *)((int)this + 0x154)) {
      FUN_012f5a60("mOrderedAccountIDs.size() == (unsigned int)mPlayerCount",
                   "..\\common\\common\\game\\Game.cpp",0x749);
    }
    iVar4 = StdVector_size((void *)((int)this + 0x15c));
    if (iVar4 != *(int *)((int)this + 0x154)) {
      FUN_012f5a60("mPlayerOrderData.size() == (unsigned int)mPlayerCount",
                   "..\\common\\common\\game\\Game.cpp",0x74a);
    }
    if (*(int *)((int)this + 0x154) < 2) {
      local_424 = Mem_Alloc(0x4c);
      local_410._0_1_ = 5;
      if (local_424 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = Player_ctor(local_424);
      }
      local_410 = CONCAT31(local_410._1_3_,4);
      (**(code **)(*(int *)this + 0x244))(pvVar3);
      puVar5 = (undefined4 *)FUN_01260d40(0);
      GamePlayer_setAccountId(*puVar5);
    }
    else {
      iVar4 = 0;
      for (iVar7 = 0; local_454 = iVar7, iVar7 < *(int *)((int)this + 0x154); iVar7 = iVar7 + 1) {
        local_424 = Mem_Alloc(0x4c);
        local_410._0_1_ = 6;
        if (local_424 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = Player_ctor(local_424);
        }
        local_410 = CONCAT31(local_410._1_3_,4);
        (**(code **)(*(int *)this + 0x244))(pvVar3);
      }
      local_42c = 0;
      local_438 = 0;
      piVar6 = (int *)FUN_0041f5d2(&local_444);
      local_438 = *piVar6;
      local_434 = piVar6[1];
      local_458 = 0;
      puVar5 = (undefined4 *)FUN_0041f3a1(&local_444);
      local_42c = *puVar5;
      local_428 = (void *)puVar5[1];
      while( true ) {
        cVar2 = FUN_00416f86(&local_438);
        if (cVar2 == '\0') break;
        piVar6 = (int *)FUN_01240910();
        pvVar3 = PlayArea_findPlayerElementById(this,*piVar6);
        puVar5 = StdVector_atElementPtr4((void *)((int)this + 0x16c),iVar4);
        GamePlayer_setAccountId(*puVar5);
        iVar4 = iVar4 + 1;
        local_458 = iVar4;
        local_43c = (int *)unknown_getField30(pvVar3);
        FUN_012fa910();
        local_410._0_1_ = 7;
        iVar7 = GamePlayer_getAccountId();
        pvVar3 = Game_getPlayerDisplayName(local_488,iVar7);
        local_410._0_1_ = 8;
        if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
          iVar7 = (int)pvVar3 + 4;
        }
        else {
          iVar7 = *(int *)((int)pvVar3 + 4);
        }
        FUN_012c6e70(iVar7);
        local_410._0_1_ = 7;
        FUN_0041f1d7();
        (**(code **)(*local_43c + 0x10))(1,local_468);
        local_410 = CONCAT31(local_410._1_3_,4);
        FUN_01300cd0();
        FUN_012fb740(&local_444,0);
      }
    }
    local_44c = 0;
    local_444 = 0;
    puVar5 = (undefined4 *)FUN_01269090(&local_438);
    local_444 = *puVar5;
    local_440 = puVar5[1];
    puVar5 = (undefined4 *)FUN_01269060(&local_438);
    local_44c = *puVar5;
    local_448 = puVar5[1];
    while( true ) {
      cVar2 = FUN_01268ea0(&local_444);
      if (cVar2 == '\0') break;
      FUN_01268e40();
      local_43c = (int *)GamePlayer_getAccountId();
      piVar6 = IntDefaultMap_getOrInsert((void *)((int)this + 0x230),(int *)&local_43c);
      *piVar6 = 0;
      local_45c = GamePlayer_getPlayerId();
      piVar6 = IntDefaultMap_getOrInsert((void *)((int)this + 0x248),&local_45c);
      *piVar6 = 0;
      TimeStamp_setCurrentFtime(&local_438);
      local_424 = (void *)GamePlayer_getPlayerId();
      piVar6 = IntDefaultMap_getOrInsert((void *)((int)this + 0x268),(int *)&local_424);
      *piVar6 = local_438;
      if (0 < *(int *)((int)this + 0x244)) {
        local_428 = Mem_Alloc(0x14);
        local_410._0_1_ = 9;
        if (local_428 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = (void *)FUN_012f9eb0();
        }
        local_410 = CONCAT31(local_410._1_3_,4);
        FUN_012f8c70(0x44);
        DisplayActionBuilder_addIntArg(pvVar3,*(int *)((int)this + 0x14));
        iVar4 = GamePlayer_getPlayerId();
        DisplayActionBuilder_addIntArg(pvVar3,iVar4);
        DisplayActionBuilder_addIntArg(pvVar3,*(int *)((int)this + 0x244));
        (**(code **)(*(int *)this + 0x154))(pvVar3);
      }
      FUN_0132e500(local_464,0);
    }
    local_428 = Mem_Alloc(0x14);
    local_410._0_1_ = 10;
    if (local_428 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_012f9eb0();
    }
    local_410 = CONCAT31(local_410._1_3_,4);
    FUN_012f8c70(0x60);
    DisplayActionBuilder_addIntArg(pvVar3,*(int *)((int)this + 0x14));
    DisplayActionBuilder_addIntArg(pvVar3,*(int *)((int)this + 0x13c));
    uVar9 = 1;
    (**(code **)(*(int *)this + 0x150))(1,pvVar3);
    *(undefined1 *)((int)this + 0x363) = 0;
    *(undefined1 *)((int)this + 0x17c) = 1;
    if (*(char *)((int)this + 0x17d) == '\x01') {
      (**(code **)(*(int *)this + 0xa4))();
    }
    else {
      Game_logGeneral(this,"mGameIsReadyForStart == false",uVar9);
    }
    local_41d = 1;
    (**(code **)(*(int *)this + 0x220))();
    local_410 = local_410 & 0xffffff00;
    FUN_0041f1d7();
  }
  ExceptionList = local_418;
  return (bool)local_41d;
}

