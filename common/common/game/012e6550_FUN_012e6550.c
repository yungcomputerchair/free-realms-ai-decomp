// addr: 0x012e6550
// name: FUN_012e6550
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_012e6550(int mode, void * ptr) */

void FUN_012e6550(int mode,void *ptr)

{
                    /* Conditionally destroys and frees a heap object when mode is 0 or 1 and the
                       pointer is non-null. It calls the element destructor helper at 012f9810
                       before freeing the allocation. */
  if (((mode == 0) || (mode == 1)) && (ptr != (void *)0x0)) {
    StdVector_destroyPolymorphicTriples(ptr);
                    /* WARNING: Subroutine does not return */
    _free(ptr);
  }
  return;
}

