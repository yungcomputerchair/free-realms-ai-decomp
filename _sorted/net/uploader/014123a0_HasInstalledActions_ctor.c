// addr: 0x014123a0
// name: HasInstalledActions_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * HasInstalledActions_ctor(void * this) */

void * __fastcall HasInstalledActions_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs HasInstalledActions, installs its vtable, and initializes an
                       embedded tree/container member. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169286b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = HasInstalledActions::vftable;
  FUN_01412330(uVar1);
  ExceptionList = local_c;
  return this;
}

