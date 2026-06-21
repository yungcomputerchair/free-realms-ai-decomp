// addr: 0x012bbe10
// name: PropertyTree15_pairCopyConstruct
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyTree15_pairCopyConstruct(void * this, void * src_pair, void *
   value_arg) */

void * __thiscall PropertyTree15_pairCopyConstruct(void *this,void *src_pair,void *value_arg)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a key/value-like tree payload by copying the first word from
                       the source and constructing the second component through 012bbc90. This is
                       the compiler helper used during tree node insertion/copy. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166dc4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)src_pair;
  PropertyTree15_valueCopyConstruct((void *)((int)this + 4),value_arg);
  ExceptionList = local_c;
  return this;
}

