// addr: 0x01351570
// name: CheckedIterator12_deref
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CheckedIterator12_deref(int * iterator) */

void * __fastcall CheckedIterator12_deref(int *iterator)

{
                    /* Checks a small iterator object for a non-null owner and non-end position,
                       then returns the current element pointer plus 0xc. Likely dereferences a
                       checked iterator whose node header precedes the payload. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  if (iterator[1] == *(int *)(*iterator + 4)) {
    FUN_00d83c2d();
  }
  return (void *)(iterator[1] + 0xc);
}

