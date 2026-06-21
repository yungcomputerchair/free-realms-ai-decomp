// addr: 0x0138a840
// name: Game_forwardToCurrentStateMachine
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
Game_forwardToCurrentStateMachine(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
                    /* If a game and current turn/state machine exist, forwards the request to a
                       method on the current state machine/state and returns its result. Used as
                       game-state plumbing rather than direct domain logic. */
  iVar1 = FUN_01340340();
  if (iVar1 != 0) {
    pvVar2 = (void *)FUN_01340340();
    pvVar2 = Game_getCurrentTurn(pvVar2);
    if (pvVar2 != (void *)0x0) {
      pvVar2 = (void *)FUN_01340340();
      pvVar2 = Game_getCurrentTurn(pvVar2);
      pvVar2 = GameTurn_getCurrentStateMachine(pvVar2);
      if (pvVar2 != (void *)0x0) {
        pvVar2 = (void *)FUN_01340340();
        pvVar2 = Game_getCurrentTurn(pvVar2);
        pvVar2 = GameTurn_getCurrentStateMachine(pvVar2);
        uVar3 = get_field_1c_if_vector_nonempty(pvVar2);
        uVar4 = (**(code **)(*param_1 + 0xd0))(param_2,param_3,uVar3);
        return uVar4;
      }
    }
  }
  return 0;
}

