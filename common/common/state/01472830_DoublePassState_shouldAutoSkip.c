// addr: 0x01472830
// name: DoublePassState_shouldAutoSkip
// subsystem: common/common/property
// source (binary assert): common/common/state/DoublePassState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DoublePassState_shouldAutoSkip(void * this) */

bool __fastcall DoublePassState_shouldAutoSkip(void *this)

{
  char cVar1;
  uint uVar2;
  void *map;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  int key_;
  char *pcVar7;
  undefined1 auStack_18 [4];
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Checks account preference data and state preconditions to decide whether
                       DoublePassState may automatically skip. Evidence: DoublePassState.cpp asserts
                       on mCurrentPlayer/account and log strings say Okay to auto skip,
                       Pref-conditions not matched, and Not skipping. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169f308;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x108) == 0) {
    FUN_012f5a60("mCurrentPlayer","..\\common\\common\\state\\DoublePassState.cpp",0x1ec);
  }
  GamePlayer_getAccountId();
  LobbyAccount_ensureSingleton();
  piVar3 = LobbyServiceAccountMap_findValue(map,key_);
  if (piVar3 == (int *)0x0) {
    uVar4 = GamePlayer_getAccountId();
    pcVar7 = "Couldn\'t get account data for account %d";
    WAErrorLog_write("Couldn\'t get account data for account %d");
    FUN_012f5a60("account","..\\common\\common\\state\\DoublePassState.cpp",0x1f1,pcVar7,uVar4);
  }
  iVar5 = (**(code **)(*(int *)this + 0x13c))();
  if (iVar5 == 0) {
    ExceptionList = local_c;
    return false;
  }
  FUN_012fa910();
  uStack_4 = 0;
  cVar1 = (**(code **)(*piVar3 + 4))(iVar5,auStack_18);
  if (cVar1 == '\0') {
    pcVar7 = "Didn\'t have value set on account Prefs, skipping.";
  }
  else {
    if (iStack_14 == 2) {
      uVar4 = FUN_0123c340();
      pcVar7 = "Got Value: %d";
      pvVar6 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar6,pcVar7,uVar4);
      iVar5 = FUN_0123c340();
      if (iVar5 == 1) {
        pcVar7 = "Okay to auto skip.";
        goto LAB_014729c4;
      }
      pcVar7 = "Not skipping if preconditions are met.";
      pvVar6 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar6,pcVar7,uVar2);
    }
    cVar1 = (**(code **)(*(int *)this + 0x140))();
    if (cVar1 == '\0') {
      pcVar7 = "Not skipping, no preconditions to check.";
      pvVar6 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar6,pcVar7,uVar2);
      uStack_4 = 0xffffffff;
      FUN_01300cd0();
      ExceptionList = local_c;
      return true;
    }
    piVar3 = (int *)StateMachineState_getCurrentTurn();
    (**(code **)(*piVar3 + 0x3c))();
    FUN_013f7eb0();
    pcVar7 = "Pref-conditions not matched, skipping.";
  }
LAB_014729c4:
  pvVar6 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar6,pcVar7,uVar2);
  uStack_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return false;
}

