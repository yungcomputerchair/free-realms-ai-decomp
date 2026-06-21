// addr: 0x014ad890
// name: SynchronizationCommand_UnlockTournament_getInstances
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall SynchronizationCommand_UnlockTournament_getInstances(int param_1)

{
                    /* Returns the vector member at +4 containing tournament instance pairs. The
                       debug printer iterates it and prints each 'Instance: (%d, %d)'. */
  return param_1 + 4;
}

