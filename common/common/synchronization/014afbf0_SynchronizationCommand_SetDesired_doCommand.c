// addr: 0x014afbf0
// name: SynchronizationCommand_SetDesired_doCommand
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SynchronizationCommand_SetDesired_doCommand(void * this) */

uint __fastcall SynchronizationCommand_SetDesired_doCommand(void *this)

{
  void *this_00;
  undefined4 extraout_EAX;
  uint desiredId_;
  
                    /* Executes a SetDesired command by validating the stored service pointer and
                       invoking the service handler that updates the desired id. */
  desiredId_ = *(uint *)((int)this + 4);
  SynchronizationService_ensureSingleton();
  SynchronizationService_handleSetDesired(this_00,desiredId_);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

