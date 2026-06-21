// addr: 0x01231b40
// name: StdStringVector_makeEndIterator
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * StdStringVector_makeEndIterator(void * this, int * outIterator) */

int * __thiscall StdStringVector_makeEndIterator(void *this,int *outIterator)

{
  uint uVar1;
  uint uVar2;
  
                    /* Builds a checked iterator pair for the end of a vector whose elements are
                       0x1c-byte std::strings. It validates end >= begin and stores
                       {container,endPointer} into the output iterator. */
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

