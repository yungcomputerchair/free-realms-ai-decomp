// addr: 0x015319a0
// name: EventCommand_LeaderboardEntryVector_size
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int EventCommand_LeaderboardEntryVector_size(void * this) */

int __fastcall EventCommand_LeaderboardEntryVector_size(void *this)

{
                    /* Returns the number of 12-byte entries in a vector-like object, or zero when
                       the begin pointer is null. Called by leaderboard vector copy/insert helpers.
                        */
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  return (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc;
}

