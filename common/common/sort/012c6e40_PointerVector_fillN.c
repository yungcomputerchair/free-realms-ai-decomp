// addr: 0x012c6e40
// name: PointerVector_fillN
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ** PointerVector_fillN(void ** first, int elementCount_, void **
   valuePtr) */

void ** PointerVector_fillN(void **first,int elementCount_,void **valuePtr)

{
  int iVar1;
  void **ppvVar2;
  
  ppvVar2 = first;
  for (iVar1 = elementCount_; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppvVar2 = *valuePtr;
    ppvVar2 = ppvVar2 + 1;
  }
  return first + elementCount_;
}

