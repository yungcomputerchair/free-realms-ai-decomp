// addr: 0x0138b190
// name: Card_moveToDiscardPile
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_moveToDiscardPile(void * this) */

void __fastcall Card_moveToDiscardPile(void *this)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  
                    /* Marks the card as moving, finds its owning player's discard pile, performs
                       pre-move cleanup, then moves the card to that discard pile with reason/state
                       2. */
  *(undefined1 *)((int)this + 0x6a) = 1;
  pvVar2 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x30),*(int *)((int)this + 0x40));
  if (pvVar2 == (void *)0x0) {
    FUN_012f5a60("player","..\\common\\common\\game\\Card.cpp",0xf13);
  }
  PlayElement_getGame();
  iVar3 = Player_getDiscardPile();
  if (iVar3 == 0) {
    FUN_012f5a60("discardPile","..\\common\\common\\game\\Card.cpp",0xf15);
  }
  (**(code **)(*(int *)this + 0x1ec))();
  pcVar1 = *(code **)(*(int *)this + 0x130);
  *(undefined1 *)((int)this + 0x6a) = 0;
  (*pcVar1)(iVar3,2);
  return;
}

