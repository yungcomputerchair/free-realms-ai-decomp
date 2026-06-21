// addr: 0x01450000
// name: CWActionPlayedState_moveCardBackToOrigin
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWActionPlayedState_moveCardBackToOrigin(void * this, void * card) */

void CWActionPlayedState_moveCardBackToOrigin(void *this,void *card)

{
  void *game;
  int playerId_;
  void *pvVar1;
  undefined4 uVar2;
  char *fmt;
  
                    /* Moves a card back to its origin for CWActionPlayedState and logs the card
                       pointer being moved. */
  fmt = "CWActionPlayedState::moveCardBackToOrigin %p";
  pvVar1 = this;
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,pvVar1);
  if (this != (void *)0x0) {
    playerId_ = (**(code **)(*(int *)this + 0x28))();
    pvVar1 = (void *)StateMachineState_getGame();
    pvVar1 = PlayArea_findPlayerElementById(pvVar1,playerId_);
    if (pvVar1 != (void *)0x0) {
      PlayElement_getGame();
      uVar2 = FUN_0139d7c0();
      (**(code **)(*(int *)this + 0x128))(uVar2);
    }
  }
  return;
}

