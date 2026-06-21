// addr: 0x01365390
// name: Game_suppressGameTextForCard
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_suppressGameTextForCard(void * this, void * card) */

void __thiscall Game_suppressGameTextForCard(void *this,void *card)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
                    /* Logs the card id and adds it to the game-text suppression vector if it is not
                       already present. */
  if (card != (void *)0x0) {
    uVar2 = PlayElement_getId();
    Game_logGeneral(this,"Suppresing game text of card: %d",uVar2);
    iVar3 = PlayElement_getId();
    piVar1 = *(int **)((int)this + 0x2e0);
    if (piVar1 < *(int **)((int)this + 0x2dc)) {
      FUN_00d83c2d();
    }
    piVar4 = *(int **)((int)this + 0x2dc);
    if (*(int **)((int)this + 0x2e0) < piVar4) {
      FUN_00d83c2d();
    }
    for (; (piVar4 != piVar1 && (*piVar4 != iVar3)); piVar4 = piVar4 + 1) {
    }
    piVar1 = *(int **)((int)this + 0x2e0);
    if (piVar1 < *(int **)((int)this + 0x2dc)) {
      FUN_00d83c2d();
    }
    if (this == (void *)0xfffffd28) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar1) {
      card = (void *)PlayElement_getId();
      FUN_0042c155(&card);
    }
  }
  return;
}

