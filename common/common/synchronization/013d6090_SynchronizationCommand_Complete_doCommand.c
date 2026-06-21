// addr: 0x013d6090
// name: SynchronizationCommand_Complete_doCommand
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SynchronizationCommand_Complete_doCommand(void * this) */

uint __fastcall SynchronizationCommand_Complete_doCommand(void *this)

{
  void *this_00;
  undefined4 extraout_EAX;
  
                    /* Executes a Complete command by validating/accessing the synchronization
                       service and dispatching the stored collection id to
                       SynchronizationService_handleComplete. */
  SynchronizationService_ensureSingleton();
  SynchronizationService_handleComplete(this_00,*(uint *)((int)this + 4));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

