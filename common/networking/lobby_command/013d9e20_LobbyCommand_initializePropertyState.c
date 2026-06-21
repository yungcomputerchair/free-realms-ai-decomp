// addr: 0x013d9e20
// name: LobbyCommand_initializePropertyState
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int LobbyCommand_initializePropertyState(void) */

int LobbyCommand_initializePropertyState(void)

{
  void *this;
  undefined4 extraout_EAX;
  
                    /* Runs a common state/property initialization helper and then clears a field
                       through 012d09f0, returning success. Exact owner is weak because no class
                       RTTI or file string is present. */
  DisplayActionManager_ensureSingleton();
  ObjectWithField5c_clearValue(this);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

