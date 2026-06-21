// addr: 0x012a8660
// name: DeckDB_getAllDecks
// subsystem: common/common/property
// source (binary assert): common/common/property/DeckDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckDB_getAllDecks(void * this) */

void __fastcall DeckDB_getAllDecks(void *this)

{
                    /* Asserts mDBMStorage is present, then delegates to DBMStorage vtable slot 0x08
                       to enumerate/load the deck records. Evidence is DeckDB.cpp and the
                       mDBMStorage assertion; this mirrors the CollectionDB_getAllCollections
                       wrapper. */
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_012f5a60("mDBMStorage","..\\common\\common\\property\\DeckDB.cpp",0xeb);
  }
                    /* WARNING: Could not recover jumptable at 0x012a8689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0xc) + 8))();
  return;
}

