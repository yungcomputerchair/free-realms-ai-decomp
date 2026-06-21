// addr: 0x01330420
// name: PointerVector_makeEndIterator
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * PointerVector_makeEndIterator(void * this, int * outIterator) */

int * __thiscall PointerVector_makeEndIterator(void *this,int *outIterator)

{
  uint uVar1;
  uint uVar2;
  
                    /* Creates a checked end iterator for a vector of 4-byte pointer elements. It
                       validates end >= begin and returns {container,endPointer}. */
  uVar1 = *(uint *)((int)this + 8);
  uVar2 = *(uint *)((int)this + 4);
  *outIterator = 0;
  if (uVar1 < uVar2) {
    FUN_00d83c2d();
  }
  *outIterator = (int)this;
  outIterator[1] = uVar1;
  return outIterator;
}

