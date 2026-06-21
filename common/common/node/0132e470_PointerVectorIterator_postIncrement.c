// addr: 0x0132e470
// name: PointerVectorIterator_postIncrement
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * PointerVectorIterator_postIncrement(int * iterator, int *
   outOldIterator) */

int * __thiscall PointerVectorIterator_postIncrement(void *this,int *iterator,int *outOldIterator)

{
  int iVar1;
  int iVar2;
  
                    /* Implements checked post-increment for a vector iterator over 4-byte pointer
                       elements. It copies the old iterator to the output, validates against the
                       vector end, then advances the current pointer by four bytes. */
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
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return iterator;
}

