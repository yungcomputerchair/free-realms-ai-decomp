// addr: 0x014f45c0
// name: FUN_014f45c0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UIntVector_appendPair(uint value_, void * vec) */

void __thiscall UIntVector_appendPair(void *this,uint value_,void *vec)

{
  void *unaff_ESI;
  
                    /* Pushes one immediate value through FUN_0042c155 and appends the second
                       argument to a vector-like container. */
  FUN_0042c155(&value_);
  StdVector28_pushBack((void *)((int)this + 0x44),vec,unaff_ESI);
  FUN_0042c155(&stack0x0000000c);
  return;
}

