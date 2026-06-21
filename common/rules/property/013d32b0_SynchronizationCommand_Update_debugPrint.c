// addr: 0x013d32b0
// name: SynchronizationCommand_Update_debugPrint
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_Update_debugPrint(void * this) */

void SynchronizationCommand_Update_debugPrint(void *this)

{
                    /* Prints the Update synchronization command header, then invokes the base debug
                       printer thunk. */
  FUN_01241650("Update Synchronization Command\n",0x1f);
  thunk_FUN_0140c290(this);
  return;
}

