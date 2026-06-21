// addr: 0x012aad90
// name: DeckDB_setDeck
// subsystem: common/common/property
// source (binary assert): common/common/property/DeckDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckDB_setDeck(void * this, void * deck) */

bool __thiscall DeckDB_setDeck(void *this,void *deck)

{
  void *pvVar1;
  int iVar2;
  int *extraout_EAX;
  undefined4 *puVar3;
  void *unaff_EDI;
  undefined1 auStack_8 [8];
  
                    /* Adds/replaces a Deck pointer in the DeckDB in-memory name map without
                       persisting it. */
  if (deck == (void *)0x0) {
    FUN_012f5a60(&DAT_018d4520,"..\\common\\common\\property\\DeckDB.cpp",0xc1);
  }
  pvVar1 = Deck_getPropertyList(deck);
  iVar2 = FUN_00f942a0(0,*(undefined4 *)((int)pvVar1 + 0x14),&DAT_0175b400,0);
  if (iVar2 == 0) {
    FUN_012f5a60("false","..\\common\\common\\property\\DeckDB.cpp",0xc4);
  }
  iVar2 = *(int *)((int)this + 4);
  pvVar1 = Deck_getPropertyList(deck);
  DeckMap_findByName(this,auStack_8,pvVar1);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar2) {
    pvVar1 = Deck_getPropertyList(deck);
    puVar3 = (undefined4 *)DeckDB_getOrCreateDeckSlotByName(this,pvVar1,unaff_EDI);
    *puVar3 = deck;
  }
  return true;
}

