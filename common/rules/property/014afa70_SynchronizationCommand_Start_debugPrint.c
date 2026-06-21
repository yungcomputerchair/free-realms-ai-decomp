// addr: 0x014afa70
// name: SynchronizationCommand_Start_debugPrint
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_Start_debugPrint(void * this) */

void SynchronizationCommand_Start_debugPrint(void *this)

{
                    /* Prints the Start synchronization command header, then invokes the base debug
                       printer thunk. */
  FUN_01241650("Start Synchronization Command\n",0x1e);
  thunk_FUN_0140c290(this);
  return;
}

