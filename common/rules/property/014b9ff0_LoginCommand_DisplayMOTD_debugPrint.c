// addr: 0x014b9ff0
// name: LoginCommand_DisplayMOTD_debugPrint
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_DisplayMOTD_debugPrint(void * this) */

void LoginCommand_DisplayMOTD_debugPrint(void *this)

{
                    /* Prints the Display MOTD command header, then invokes the base login debug
                       printer thunk. */
  FUN_01241650("Display MOTD Command\n",0x15);
  thunk_FUN_0140c290(this);
  return;
}

