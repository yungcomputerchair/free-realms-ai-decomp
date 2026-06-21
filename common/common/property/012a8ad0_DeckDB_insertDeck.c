// addr: 0x012a8ad0
// name: DeckDB_insertDeck
// subsystem: common/common/property
// source (binary assert): common/common/property/DeckDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckDB_insertDeck(void * this, void * deck) */

bool __thiscall DeckDB_insertDeck(void *this,void *deck)

{
  undefined1 uVar1;
  void *buffer;
  void *pvVar2;
  
                    /* Persists/inserts a Deck into mDBMStorage using its Deck property-list key and
                       serialized buffer. */
  if (deck == (void *)0x0) {
    FUN_012f5a60(&DAT_018d4520,"..\\common\\common\\property\\DeckDB.cpp",0xce);
  }
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_012f5a60("mDBMStorage","..\\common\\common\\property\\DeckDB.cpp",0xcf);
  }
  buffer = (void *)(**(code **)(*(int *)deck + 0x28))(0);
  pvVar2 = Deck_getPropertyList(deck);
  uVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0xc))(pvVar2,buffer);
  if (buffer != (void *)0x0) {
    RawBuffer_free(buffer);
                    /* WARNING: Subroutine does not return */
    _free(buffer);
  }
  return (bool)uVar1;
}

