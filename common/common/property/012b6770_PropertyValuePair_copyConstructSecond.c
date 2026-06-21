// addr: 0x012b6770
// name: PropertyValuePair_copyConstructSecond
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyValuePair_copyConstructSecond(void * this, void * src, void *
   value) */

void * __thiscall PropertyValuePair_copyConstructSecond(void *this,void *src,void *value)

{
  uint other;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the leading word from the source and constructs another associated
                       member through FUN_012b5cb0. It mirrors 012b6710 and is reached from a nearby
                       property helper FUN_012b7c80. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166d41b;
  local_c = ExceptionList;
  other = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)src;
  QuadVector_copyCtor((void *)((int)this + 4),(int)value,other);
  ExceptionList = local_c;
  return this;
}

