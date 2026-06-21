// addr: 0x0143b040
// name: CollectionElementVector_dtorThunk
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CollectionElementVector_dtorThunk(void) */

void CollectionElementVector_dtorThunk(void)

{
                    /* Tiny thunk that forwards to the collection-element vector destructor/helper.
                        */
  CollectionElementVector_copyAssign();
  return;
}

