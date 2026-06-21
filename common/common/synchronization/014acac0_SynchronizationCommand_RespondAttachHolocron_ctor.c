// addr: 0x014acac0
// name: SynchronizationCommand_RespondAttachHolocron_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_RespondAttachHolocron_ctor(void * this) */

void * __fastcall SynchronizationCommand_RespondAttachHolocron_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RespondAttachHolocron synchronization command, installing its
                       vftable and setting its id/status field to -1. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = SynchronizationCommand_RespondAttachHolocron::vftable;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

