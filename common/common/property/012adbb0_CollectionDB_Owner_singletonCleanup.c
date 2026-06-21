// addr: 0x012adbb0
// name: CollectionDB_Owner_singletonCleanup
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_Owner_singletonCleanup(void * instance) */

void __fastcall CollectionDB_Owner_singletonCleanup(void *instance)

{
                    /* Global singleton cleanup thunk for a CollectionDB-related owner object. It
                       clears DAT_01cbd684, then destroys and frees the instance if present. */
  DAT_01cbd684 = 0;
  if (instance != (void *)0x0) {
    CollectionDB_dtor(instance);
                    /* WARNING: Subroutine does not return */
    _free(instance);
  }
  return;
}

