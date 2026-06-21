// addr: 0x014692c0
// name: FUN_014692c0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint phase_state_leave_or_cleanup(void * this) */

uint __fastcall phase_state_leave_or_cleanup(void *this)

{
  void *pvVar1;
  int *piVar2;
  int playerId_;
  
                    /* Phase-related cleanup that pops pending state and touches the current player
                       element. Exact PhaseState method name is not proven. */
  playerId_ = *(int *)((int)this + 0x124);
  pvVar1 = (void *)StateMachineState_getGame();
  pvVar1 = PlayArea_findPlayerElementById(pvVar1,playerId_);
  if (pvVar1 != (void *)0x0) {
    piVar2 = (int *)StateMachineState_getCurrentTurn();
    (**(code **)(*piVar2 + 0x48))(pvVar1);
  }
  pvVar1 = StateMachine_popPendingState(*(void **)((int)this + 8));
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}

