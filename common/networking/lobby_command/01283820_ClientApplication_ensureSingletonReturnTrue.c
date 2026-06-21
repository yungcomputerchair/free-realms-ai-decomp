// addr: 0x01283820
// name: ClientApplication_ensureSingletonReturnTrue
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int ClientApplication_ensureSingletonReturnTrue(void) */

int ClientApplication_ensureSingletonReturnTrue(void)

{
                    /* Ensures the global ClientApplication singleton exists and returns true.
                       Evidence: calls 012d46a0, whose body allocates/constructs DAT_01cbd6a4 with
                       ClientApplication when absent, then returns 1. */
  DisplayActionManager_ensureSingleton();
  return 1;
}

