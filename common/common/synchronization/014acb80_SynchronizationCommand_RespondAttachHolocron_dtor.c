// addr: 0x014acb80
// name: SynchronizationCommand_RespondAttachHolocron_dtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RespondAttachHolocron_dtor(void * this) */

void __fastcall SynchronizationCommand_RespondAttachHolocron_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SynchronizationCommand_RespondAttachHolocron; reinstalls its
                       vtable and destroys the base SynchronizationCommand. */
  puStack_8 = &LAB_016a64b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_RespondAttachHolocron::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

