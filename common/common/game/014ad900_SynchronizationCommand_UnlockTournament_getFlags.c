// addr: 0x014ad900
// name: SynchronizationCommand_UnlockTournament_getFlags
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int SynchronizationCommand_UnlockTournament_getFlags(void * this) */

int __fastcall SynchronizationCommand_UnlockTournament_getFlags(void *this)

{
                    /* Returns the flags field at +0x18 for SynchronizationCommand_UnlockTournament.
                       The debug printer emits it in the 'Flags: %d [%d]' line. */
  return *(int *)((int)this + 0x18);
}

