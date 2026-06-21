// addr: 0x012b6710
// name: PropertyValuePair_copyConstructFirst
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyValuePair_copyConstructFirst(void * this, void * src, void *
   value) */

void * __thiscall PropertyValuePair_copyConstructFirst(void *this,void *src,void *value)

{
  uint other;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the first word from a source pair/object and constructs an associated
                       value by calling FUN_012b5c60 on the third argument. The small SEH-framed
                       shape is a compiler generated helper used from FUN_012b7dc0. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166d3eb;
  local_c = ExceptionList;
  other = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)src;
  PairVector_copyCtor((void *)((int)this + 4),(int)value,other);
  ExceptionList = local_c;
  return this;
}

