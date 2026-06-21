// addr: 0x0136c3e0
// name: Game_dispatchQueuedCommandsThunk
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void Game_dispatchQueuedCommandsThunk(void)

{
                    /* Thin wrapper that forwards stack arguments to 0136bd70, called only from the
                       game queue/dispatch helper. Evidence: called by 0136ea70 and contains no
                       independent logic. */
  Game_getOrCreateCommandQueueEntry(&stack0x00000004);
  return;
}

