// addr: 0x014c82a0
// name: LobbyCommand_ChallengeLeaguePlayerResponse_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall
LobbyCommand_ChallengeLeaguePlayerResponse_deletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for LobbyCommand_ChallengeLeaguePlayerResponse; it
                       invokes the class destructor then conditionally frees this. Evidence is
                       direct call to 014c8120 and flags-controlled _free. */
  LobbyCommand_ChallengeLeaguePlayerResponse_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

