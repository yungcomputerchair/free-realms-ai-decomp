// addr: 0x01345780
// name: CollectionReference_getCollection
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionReference_getCollection(void * this) */

void * __fastcall CollectionReference_getCollection(void *this)

{
  undefined4 uVar1;
  
                    /* Returns the cached collection pointer, resolving it from CollectionDB on
                       first use. The stored id/key at offset 0x38 is passed to the CollectionDB
                       lookup and cached at 0x2c. */
  if (*(int *)((int)this + 0x2c) == 0) {
    CollectionDB_initSingleton();
    uVar1 = CollectionDB_getCollectionById(*(undefined4 *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x2c) = uVar1;
  }
  return *(void **)((int)this + 0x2c);
}

