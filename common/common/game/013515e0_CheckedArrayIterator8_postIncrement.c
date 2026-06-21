// addr: 0x013515e0
// name: CheckedArrayIterator8_postIncrement
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * CheckedArrayIterator8_postIncrement(int * iterator, int * oldValue) */

int * __thiscall CheckedArrayIterator8_postIncrement(void *this,int *iterator,int *oldValue)

{
  int iVar1;
  int iVar2;
  
                    /* Copies the current checked iterator to the output, validates it, then
                       advances its current offset by 8 bytes. This matches post-increment for an
                       8-byte element iterator. */
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  *iterator = iVar1;
  iterator[1] = iVar2;
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*(int *)this + 8) <= *(uint *)((int)this + 4)) {
    FUN_00d83c2d();
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return iterator;
}

