// addr: 0x0139e390
// name: STLVector_dword_shuffle
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void STLVector_dword_shuffle(uint * beginPtr, uint * endPtr) */

void __cdecl STLVector_dword_shuffle(uint *beginPtr,uint *endPtr)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint upperBound_;
  void *in_stack_0000000c;
  
  upperBound_ = 2;
  puVar2 = beginPtr;
  while (puVar2 = puVar2 + 1, puVar2 != endPtr) {
    iVar3 = MTRandom_getIntBelow(in_stack_0000000c,upperBound_);
    iVar3 = iVar3 % (int)upperBound_;
    uVar1 = *puVar2;
    upperBound_ = upperBound_ + 1;
    *puVar2 = beginPtr[iVar3];
    beginPtr[iVar3] = uVar1;
  }
  return;
}

