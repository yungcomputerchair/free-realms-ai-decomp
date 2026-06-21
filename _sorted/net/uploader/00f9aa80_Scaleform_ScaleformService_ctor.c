// addr: 0x00f9aa80
// name: Scaleform_ScaleformService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Scaleform_ScaleformService_ctor(void * this) */

void * __fastcall Scaleform_ScaleformService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Scaleform::ScaleformService by running a base/helper initializer
                       and installing the ScaleformService vtable. This is likely a weak
                       misclassification outside uploader. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162a558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Scaleform_ScaleformServiceBase_ctor(this);
  *(undefined ***)this = Scaleform::ScaleformService::vftable;
  ExceptionList = local_c;
  return this;
}

