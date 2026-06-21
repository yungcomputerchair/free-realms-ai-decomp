// addr: 0x012bbc90
// name: PropertyTree15_valueCopyConstruct
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyTree15_valueCopyConstruct(void * this, void * src_value) */

void * __thiscall PropertyTree15_valueCopyConstruct(void *this,void *src_value)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler helper that copy-constructs a tree value/member by forwarding the
                       source object to FUN_012bba40 and returning the destination. It is used by
                       nearby pair-copy and constructor helpers in the same tree layout. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166dba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012bba40(src_value);
  ExceptionList = local_c;
  return this;
}

