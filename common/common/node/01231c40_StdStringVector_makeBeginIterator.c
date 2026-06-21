// addr: 0x01231c40
// name: StdStringVector_makeBeginIterator
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * StdStringVector_makeBeginIterator(void * this, int * outIterator) */

int * __thiscall StdStringVector_makeBeginIterator(void *this,int *outIterator)

{
  uint uVar1;
  uint uVar2;
  
                    /* Builds a checked iterator pair for the beginning of a vector of 0x1c-byte
                       std::string values. It validates the vector range and stores
                       {container,beginPointer} into the output iterator. */
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

