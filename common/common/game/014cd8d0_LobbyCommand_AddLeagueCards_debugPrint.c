// addr: 0x014cd8d0
// name: LobbyCommand_AddLeagueCards_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddLeagueCards_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_AddLeagueCards_debugPrint(void *this,void *out)

{
                    /* Appends the 'Add League Cards Lobby Command' header and then emits the base
                       LobbyCommand account id fields. */
  FUN_01241650("Add League Cards Lobby Command\n",0x1f);
  AccountCommand_dump(this,out);
  return;
}

