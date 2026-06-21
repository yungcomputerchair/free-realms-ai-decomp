// addr: 0x01354d50
// name: CheckedIterator12_deref_B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CheckedIterator12_deref_B(int * iterator) */

void * __fastcall CheckedIterator12_deref_B(int *iterator)

{
                    /* Checks a small iterator object for non-null owner and non-end state, then
                       returns the payload at current node+0xc. This appears to be another
                       instantiation of the checked iterator dereference helper. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  if (iterator[1] == *(int *)(*iterator + 4)) {
    FUN_00d83c2d();
  }
  return (void *)(iterator[1] + 0xc);
}

