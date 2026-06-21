// addr: 0x013a9b00
// name: SynchronizationCommand_RequestAttachHolocron_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_RequestAttachHolocron_ctor(void * this) */

void * __fastcall SynchronizationCommand_RequestAttachHolocron_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SynchronizationCommand_RequestAttachHolocron by running the base
                       SynchronizationCommand constructor, installing its vftable, and initializing
                       two id fields to -1. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016863b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = SynchronizationCommand_RequestAttachHolocron::vftable;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

