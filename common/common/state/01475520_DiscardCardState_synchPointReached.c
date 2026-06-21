// addr: 0x01475520
// name: DiscardCardState_synchPointReached
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint DiscardCardState_synchPointReached(void * this) */

uint __fastcall DiscardCardState_synchPointReached(void *this)

{
  void *game;
  undefined4 uVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Handles DiscardCardState synchronization, logging the method and
                       advancing/finishing the discard state work. */
  fmt = "DiscardCardState::synchPointReached";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  if (0 < *(int *)((int)this + 0x104)) {
    *(int *)((int)this + 0x114) = *(int *)((int)this + 0x114) + 1;
  }
  if ((*(int *)((int)this + 0x110) != 0) && (0 < *(int *)((int)this + 0x104))) {
    uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x44))();
    FUN_014643a0(*(undefined4 *)((int)this + 0x110));
    EvaluationEnvironment_setReturnKey8Integer(*(undefined4 *)((int)this + 0x110));
    uVar2 = StateMachine_setCurrentState(uVar1);
    return uVar2;
  }
  uVar2 = (**(code **)(*(int *)this + 0x44))();
  return uVar2;
}

