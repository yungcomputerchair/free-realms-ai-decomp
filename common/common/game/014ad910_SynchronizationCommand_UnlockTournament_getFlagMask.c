// addr: 0x014ad910
// name: SynchronizationCommand_UnlockTournament_getFlagMask
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int SynchronizationCommand_UnlockTournament_getFlagMask(void * this) */

int __fastcall SynchronizationCommand_UnlockTournament_getFlagMask(void *this)

{
                    /* Returns the secondary flags/mask field at +0x1c for
                       SynchronizationCommand_UnlockTournament. It is used with the flags value in
                       the debug printer. */
  return *(int *)((int)this + 0x1c);
}

