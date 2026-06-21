// addr: 0x013a9ed0
// name: SynchronizationCommand_RequestAttachHolocron_debugPrint
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RequestAttachHolocron_debugPrint(void * this) */

void SynchronizationCommand_RequestAttachHolocron_debugPrint(void *this)

{
                    /* Prints the RequestAttachHolocron synchronization command header, then invokes
                       the base debug printer thunk. */
  FUN_01241650("RequestAttachHolocron Synchronization Command\n",0x2e);
  thunk_FUN_0140c290(this);
  return;
}

