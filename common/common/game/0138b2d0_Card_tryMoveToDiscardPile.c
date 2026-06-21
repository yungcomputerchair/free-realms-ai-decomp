// addr: 0x0138b2d0
// name: Card_tryMoveToDiscardPile
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_tryMoveToDiscardPile(void * this) */

bool __fastcall Card_tryMoveToDiscardPile(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  void *pvVar3;
  int iVar4;
  
                    /* Guarded discard-pile move: returns false if already moving, otherwise locates
                       the player's discard pile, cleans up, and invokes the card move/test virtual.
                        */
  if (*(char *)((int)this + 0x6a) == '\x01') {
    return false;
  }
  *(undefined1 *)((int)this + 0x6a) = 1;
  pvVar3 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x30),*(int *)((int)this + 0x40));
  if (pvVar3 == (void *)0x0) {
    FUN_012f5a60("player","..\\common\\common\\game\\Card.cpp",0xf47);
  }
  PlayElement_getGame();
  iVar4 = Player_getDiscardPile();
  if (iVar4 == 0) {
    FUN_012f5a60("discardPile","..\\common\\common\\game\\Card.cpp",0xf49);
  }
  (**(code **)(*(int *)this + 0x1ec))();
  pcVar1 = *(code **)(*(int *)this + 0x128);
  *(undefined1 *)((int)this + 0x6a) = 0;
  uVar2 = (*pcVar1)(iVar4);
  return (bool)uVar2;
}

