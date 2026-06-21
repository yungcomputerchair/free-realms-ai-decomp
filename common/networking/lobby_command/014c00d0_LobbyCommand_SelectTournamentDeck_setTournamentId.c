// addr: 0x014c00d0
// name: LobbyCommand_SelectTournamentDeck_setTournamentId
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SelectTournamentDeck_setTournamentId(void * this, int
   tournamentId) */

void __thiscall LobbyCommand_SelectTournamentDeck_setTournamentId(void *this,int tournamentId)

{
                    /* Sets the tournament id field at offset 0x28 for a SelectTournamentDeck
                       command. */
  *(int *)((int)this + 0x28) = tournamentId;
  return;
}

