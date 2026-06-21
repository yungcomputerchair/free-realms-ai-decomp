// addr: 0x012aae40
// name: DeckDB_getDeck
// subsystem: common/common/property
// source (binary assert): common/common/property/DeckDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeckDB_getDeck(void * this, void * deckName) */

void * __thiscall DeckDB_getDeck(void *this,void *deckName)

{
  int iVar1;
  int *extraout_EAX;
  undefined4 *puVar2;
  void *pvVar3;
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Looks up a deck in the DeckDB name map and, if it is not cached, asks
                       mDBMStorage to load it before returning the stored DeckData pointer. Evidence
                       is the DeckDB.cpp mDBMStorage assertion and calls through the same
                       lookup/load helpers used by the neighboring DeckDB add/get routines. */
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_012f5a60("mDBMStorage","..\\common\\common\\property\\DeckDB.cpp",0x55);
  }
  iVar1 = *(int *)((int)this + 4);
  DeckMap_findByName(this,local_8,deckName);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] != iVar1) {
    puVar2 = (undefined4 *)DeckDB_getOrCreateDeckSlotByName(this,deckName,unaff_EDI);
    return (void *)*puVar2;
  }
  pvVar3 = (void *)DeckDB_loadDeckFromStorage(deckName);
  return pvVar3;
}

