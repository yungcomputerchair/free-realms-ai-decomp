// addr: 0x01334890
// name: Game_addDecksForOrderedPlayers
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __fastcall Game_addDecksForOrderedPlayers(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *this;
  undefined4 uVar5;
  int *this_00;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Validates ordered account/player data, creates CWPlayer/CWDeck instances for
                       each player, logs "Adding a deck for %d", randomizes deck ids, and attaches
                       decks. Evidence: cwgame.cpp assertions and log string. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167b196;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  if ((param_1[0x5c] == 0) || (param_1[0x5d] - param_1[0x5c] >> 2 == 0)) {
    FUN_012f5a60("mOrderedAccountIDs.size()","..\\common\\rules\\game\\cwgame.cpp",0xe1f,uVar2);
  }
  if (param_1[0x5c] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1[0x5d] - param_1[0x5c] >> 2;
  }
  if (iVar3 != param_1[0x55]) {
    FUN_012f5a60("mOrderedAccountIDs.size() == (unsigned int)mPlayerCount",
                 "..\\common\\rules\\game\\cwgame.cpp",0xe20,uVar2);
  }
  if (param_1[0x58] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1[0x59] - param_1[0x58] >> 2;
  }
  if (iVar3 != param_1[0x55]) {
    FUN_012f5a60("mPlayerOrderData.size() == (unsigned int)mPlayerCount",
                 "..\\common\\rules\\game\\cwgame.cpp",0xe21,uVar2);
  }
  uVar2 = param_1[0x55];
  if (1 < (int)uVar2) {
    uStack_18 = 0;
    if (0 < (int)uVar2) {
      do {
        pvVar4 = Mem_Alloc(100);
        this_00 = (int *)0x0;
        uStack_4 = 0;
        if (pvVar4 == (void *)0x0) {
          this = (undefined4 *)0x0;
        }
        else {
          this = (undefined4 *)CWPlayer_ctor();
        }
        uStack_4 = 0xffffffff;
        pvVar4 = Mem_Alloc(0x94);
        uStack_4 = 1;
        if (pvVar4 != (void *)0x0) {
          this_00 = (int *)CWDeck_ctor();
        }
        uStack_4 = 0xffffffff;
        uVar2 = param_1[0x5c];
        if ((uVar2 == 0) || ((uint)((int)(param_1[0x5d] - uVar2) >> 2) <= uStack_18)) {
          uVar2 = FUN_01259830();
          return uVar2;
        }
        if ((uint)param_1[0x5d] < uVar2) {
          FUN_00d83c2d();
        }
        puVar1 = (undefined4 *)(uVar2 + uStack_18 * 4);
        if (((undefined4 *)param_1[0x5d] < puVar1) || (puVar1 < (undefined4 *)param_1[0x5c])) {
          FUN_00d83c2d();
        }
        if ((undefined4 *)param_1[0x5d] <= puVar1) {
          FUN_00d83c2d();
        }
        GamePlayer_setAccountId(*puVar1);
        uVar5 = GamePlayer_getAccountId();
        Game_logGeneral(param_1,"Adding a deck for %d",uVar5);
        pvVar4 = CollectionReference_getCollection(this);
        PropertyCommand_emitRandomizedIds(this_00,true,pvVar4);
        (**(code **)(*param_1 + 600))(this_00);
        (**(code **)(*this_00 + 0x38))(param_1);
        if (this != (undefined4 *)0x0) {
          (**(code **)*this)(1);
        }
        (**(code **)*this_00)(1);
        uStack_18 = uStack_18 + 1;
      } while ((int)uStack_18 < param_1[0x55]);
    }
    if (param_1[0xf7] == 0) {
      ExceptionList = local_c;
      return (uint)(param_1[0x55] == 0);
    }
    iVar3 = param_1[0xf8] - param_1[0xf7];
    ExceptionList = local_c;
    return CONCAT31((int3)(iVar3 >> 10),iVar3 >> 2 == param_1[0x55]);
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}

