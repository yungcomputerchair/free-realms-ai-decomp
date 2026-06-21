// addr: 0x012a85e0
// name: DeckDB_saveDeck
// subsystem: common/common/property
// source (binary assert): common/common/property/DeckDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckDB_saveDeck(void * this, void * deck) */

bool __thiscall DeckDB_saveDeck(void *this,void *deck)

{
  undefined1 uVar1;
  void *buffer;
  
                    /* Serializes/saves an existing Deck through mDBMStorage using the deck's
                       storage key allocated by the deck vtable method at +0x28. It asserts the deck
                       pointer and mDBMStorage, then calls the storage vtable slot at +0x1c. */
  if (deck == (void *)0x0) {
    FUN_012f5a60(&DAT_018d4520,"..\\common\\common\\property\\DeckDB.cpp",0xdd);
  }
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_012f5a60("mDBMStorage","..\\common\\common\\property\\DeckDB.cpp",0xde);
  }
  buffer = (void *)(**(code **)(*(int *)deck + 0x28))(0);
  uVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x1c))(deck,buffer);
  if (buffer != (void *)0x0) {
    RawBuffer_free(buffer);
                    /* WARNING: Subroutine does not return */
    _free(buffer);
  }
  return (bool)uVar1;
}

