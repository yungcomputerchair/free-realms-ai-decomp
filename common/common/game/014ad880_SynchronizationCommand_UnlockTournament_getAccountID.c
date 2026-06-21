// addr: 0x014ad880
// name: SynchronizationCommand_UnlockTournament_getAccountID
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int SynchronizationCommand_UnlockTournament_getAccountID(void * this) */

int __fastcall SynchronizationCommand_UnlockTournament_getAccountID(void *this)

{
                    /* Returns the account id at +0x14 for SynchronizationCommand_UnlockTournament.
                       The debug printer formats it as 'AccountID: %d'. */
  return *(int *)((int)this + 0x14);
}

