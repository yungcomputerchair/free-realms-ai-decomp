// addr: 0x013304f0
// name: PointerVectorIterator_postIncrementAlt
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * PointerVectorIterator_postIncrementAlt(int * iterator, int *
   outOldIterator) */

int * __thiscall
PointerVectorIterator_postIncrementAlt(void *this,int *iterator,int *outOldIterator)

{
  int iVar1;
  int iVar2;
  
                    /* Duplicate checked post-increment helper for 4-byte pointer-vector iterators.
                       It copies the old iterator, validates it is before the vector end, and
                       advances by one pointer slot. */
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

