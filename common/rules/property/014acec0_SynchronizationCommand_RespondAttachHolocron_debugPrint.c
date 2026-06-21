// addr: 0x014acec0
// name: SynchronizationCommand_RespondAttachHolocron_debugPrint
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RespondAttachHolocron_debugPrint(void * this) */

void SynchronizationCommand_RespondAttachHolocron_debugPrint(void *this)

{
                    /* Prints the RespondAttachHolocron synchronization command header, then invokes
                       the base debug printer thunk. */
  FUN_01241650("RespondAttachHolocron Synchronization Command\n",0x2e);
  thunk_FUN_0140c290(this);
  return;
}

