// addr: 0x014765d0
// name: DiscardCardState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint DiscardCardState_restoreState(void * this) */

uint __fastcall DiscardCardState_restoreState(void *this)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  char *fmt;
  undefined4 uVar4;
  
                    /* Restores DiscardCardState, logging the stored player/card values and
                       reapplying discard-state UI/game state. */
  uVar4 = *(undefined4 *)((int)this + 0x114);
  fmt = "DiscardCardState::restoreState (%d, %d)";
  pvVar2 = (void *)StateMachineState_getGame
                             ("DiscardCardState::restoreState (%d, %d)",uVar4,
                              *(undefined4 *)((int)this + 0x104));
  Game_logGeneral(pvVar2,fmt,uVar4);
  if (*(int *)((int)this + 0x104) <= *(int *)((int)this + 0x114)) {
    return 1;
  }
  pvVar2 = (void *)StateMachineState_getGame();
  bVar1 = Game_getFlag_14d(pvVar2);
  if (bVar1) {
    uVar3 = DiscardCardState_discardCards();
    return uVar3;
  }
  return 2;
}

