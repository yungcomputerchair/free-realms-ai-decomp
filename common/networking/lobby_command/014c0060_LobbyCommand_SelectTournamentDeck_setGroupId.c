// addr: 0x014c0060
// name: LobbyCommand_SelectTournamentDeck_setGroupId
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SelectTournamentDeck_setGroupId(void * this, int groupId) */

void __thiscall LobbyCommand_SelectTournamentDeck_setGroupId(void *this,int groupId)

{
                    /* Sets the group id field at offset 0x2c for a SelectTournamentDeck command. */
  *(int *)((int)this + 0x2c) = groupId;
  return;
}

