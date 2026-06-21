// addr: 0x0088ea70
// name: Deep_VisibilityObjectDPVSInterface_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_VisibilityObjectDPVSInterface_ctor(void * this) */

void * __fastcall Deep_VisibilityObjectDPVSInterface_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Deep::VisibilityObjectDPVSInterface by first running its base
                       constructor and then installing the class vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01579028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0088d150(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = Deep::VisibilityObjectDPVSInterface::vftable;
  ExceptionList = local_c;
  return this;
}

