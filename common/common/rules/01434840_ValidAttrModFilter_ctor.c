// addr: 0x01434840
// name: ValidAttrModFilter_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ValidAttrModFilter_ctor(void * this) */

void * __fastcall ValidAttrModFilter_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ValidAttrModFilter, installing ValidAttrModFilter vtables,
                       constructing a base/member object, and zeroing filter fields at offsets
                       0x48/0x58/0x5c. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696c93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PlayElement_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *(undefined ***)this = ValidAttrModFilter::vftable;
  *(undefined ***)((int)this + 8) = ValidAttrModFilter::vftable;
  FUN_012fa910();
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  ExceptionList = local_c;
  return this;
}

