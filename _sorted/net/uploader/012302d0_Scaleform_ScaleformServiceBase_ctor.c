// addr: 0x012302d0
// name: Scaleform_ScaleformServiceBase_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Scaleform_ScaleformServiceBase_ctor(void * this) */

void * __fastcall Scaleform_ScaleformServiceBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the Scaleform service base, installs the base vtable, clears
                       service pointers, and sets a default 800x600 viewport with flags cleared. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01651418;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01230d10(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = Scaleform::ScaleformServiceBase::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 800;
  *(undefined4 *)((int)this + 0x14) = 600;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x19) = 0;
  ExceptionList = local_c;
  return this;
}

