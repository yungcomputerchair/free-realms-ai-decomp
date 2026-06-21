// addr: 0x014b8810
// name: LoginCommand_Guest_debugPrint
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_Guest_debugPrint(void * this) */

void LoginCommand_Guest_debugPrint(void *this)

{
                    /* Prints the guest login command header, then invokes the base login debug
                       printer thunk. */
  FUN_01241650("Guest Login Challenge\n",0x16);
  thunk_FUN_0140c290(this);
  return;
}

