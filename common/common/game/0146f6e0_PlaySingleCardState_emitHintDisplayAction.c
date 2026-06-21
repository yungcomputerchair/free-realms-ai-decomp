// addr: 0x0146f6e0
// name: PlaySingleCardState_emitHintDisplayAction
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void PlaySingleCardState_emitHintDisplayAction(void)

{
  bool bVar1;
  void *pvVar2;
  int value_;
  int *piVar3;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a display action for PlaySingleCardState hints, adding object and
                       integer arguments depending on a game flag and current state. Exact hint
                       action type is not named. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ec63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = (void *)StateMachineState_getGame(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  bVar1 = Game_getFlag_14d(pvVar2);
  if (!bVar1) {
    pvVar2 = Mem_Alloc(0x14);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x71);
    StateMachineState_getGame();
    value_ = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar2,value_);
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 1;
    DisplayActionBuilder_addObjectArg(pvVar2,local_1c);
    piVar3 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar3 + 0x154))(pvVar2);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return;
}

