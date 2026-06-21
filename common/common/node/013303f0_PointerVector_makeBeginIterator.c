// addr: 0x013303f0
// name: PointerVector_makeBeginIterator
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * PointerVector_makeBeginIterator(void * this, int * outIterator) */

int * __thiscall PointerVector_makeBeginIterator(void *this,int *outIterator)

{
  uint uVar1;
  uint uVar2;
  
                    /* Creates a checked begin iterator for a vector of 4-byte pointer elements. It
                       validates the vector range and returns {container,beginPointer}. */
  uVar2 = *(uint *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 8);
  *outIterator = 0;
  if (uVar1 < uVar2) {
    FUN_00d83c2d();
  }
  *outIterator = (int)this;
  outIterator[1] = uVar2;
  return outIterator;
}

