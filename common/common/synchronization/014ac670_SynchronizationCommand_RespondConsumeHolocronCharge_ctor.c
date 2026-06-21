// addr: 0x014ac670
// name: SynchronizationCommand_RespondConsumeHolocronCharge_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_RespondConsumeHolocronCharge_ctor(void * this)
    */

void * __fastcall SynchronizationCommand_RespondConsumeHolocronCharge_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RespondConsumeHolocronCharge synchronization command, installing
                       its vftable and initializing the payload id field to -1. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = SynchronizationCommand_RespondConsumeHolocronCharge::vftable;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

