// addr: 0x014ae770
// name: SynchronizationCommand_StartInstances_doCommand
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SynchronizationCommand_StartInstances_doCommand(void * this) */

uint __fastcall SynchronizationCommand_StartInstances_doCommand(void *this)

{
  void *this_00;
  undefined4 extraout_EAX;
  
                    /* Executes a StartInstances command by validating the service and passing
                       collection type/account/sync fields into the service handler. */
  SynchronizationService_ensureSingleton();
  SynchronizationService_handleStartInstances
            (this_00,*(uint *)((int)this + 4),*(int *)((int)this + 8),*(uint *)((int)this + 0xc),
             *(uint *)((int)this + 0x10));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

