// addr: 0x014af730
// name: SynchronizationCommand_Start_doCommand
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SynchronizationCommand_Start_doCommand(void * this) */

uint __fastcall SynchronizationCommand_Start_doCommand(void *this)

{
  void *this_00;
  undefined4 extraout_EAX;
  
                    /* Executes a Start command by validating the synchronization service and
                       forwarding its stored ids/counts to the Start handler wrapper. */
  SynchronizationService_ensureSingleton();
  SynchronizationService_handleStartDefaultDesiredCount
            (this_00,*(uint *)((int)this + 0xc),*(int *)((int)this + 8));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

