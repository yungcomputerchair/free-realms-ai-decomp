// addr: 0x0147e9f0
// name: moveCardBackToOrigin
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void moveCardBackToOrigin(void * card) */

void moveCardBackToOrigin(void *card)

{
  void *game;
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 unaff_EDI;
  char *pcVar4;
  
                    /* Logs moveCardBackToOrigin, finds the card owner/player element, and checks
                       whether the parent is the hand pile. */
  pcVar4 = "moveCardBackToOrigin %p";
  pvVar2 = card;
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,pcVar4,pvVar2);
  if (card != (void *)0x0) {
    iVar1 = (**(code **)(*(int *)card + 0x28))();
    pvVar2 = (void *)StateMachineState_getGame();
    pvVar2 = PlayArea_findPlayerElementById(pvVar2,iVar1);
    if (pvVar2 != (void *)0x0) {
      PlayElement_getGame();
      iVar1 = FUN_0139d7c0();
      iVar3 = (**(code **)(*(int *)card + 0x30))();
      if (iVar1 == iVar3) {
        pcVar4 = "parent is handpile.";
        pvVar2 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar2,pcVar4,unaff_EDI);
      }
    }
  }
  return;
}

