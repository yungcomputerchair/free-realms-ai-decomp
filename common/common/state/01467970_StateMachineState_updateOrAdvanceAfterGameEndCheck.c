// addr: 0x01467970
// name: StateMachineState_updateOrAdvanceAfterGameEndCheck
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachineState_updateOrAdvanceAfterGameEndCheck(void * this) */

int __fastcall StateMachineState_updateOrAdvanceAfterGameEndCheck(void *this)

{
  bool bVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* If a waiting flag is set clears it; if game ended logs and stops; otherwise
                       advances the state and calls a game virtual update hook. */
  pvVar2 = (void *)StateMachineState_getCurrentTurn();
  bVar1 = get_flag_54(pvVar2);
  if (bVar1) {
    bVar1 = false;
    pvVar2 = (void *)StateMachineState_getCurrentTurn();
    set_flag_54(pvVar2,bVar1);
    return 1;
  }
  pvVar2 = (void *)StateMachineState_getGame();
  bVar1 = Game_getPendingFlag_131(pvVar2);
  if (bVar1) {
    fmt = "GameEnded set, bailing.";
    pvVar2 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar2,fmt,unaff_ESI);
    return 1;
  }
  (**(code **)(*(int *)this + 0x88))();
  piVar3 = (int *)StateMachineState_getGame();
  (**(code **)(*piVar3 + 0x17c))();
  return 2;
}

