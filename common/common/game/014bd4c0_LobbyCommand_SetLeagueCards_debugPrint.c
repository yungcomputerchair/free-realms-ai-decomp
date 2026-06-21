// addr: 0x014bd4c0
// name: LobbyCommand_SetLeagueCards_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetLeagueCards_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_SetLeagueCards_debugPrint(void *this,void *out)

{
                    /* Appends the 'SetLeagueCards Lobby Command' header and then emits the base
                       LobbyCommand account id fields. */
  FUN_01241650("SetLeagueCards Lobby Command\n",0x1d);
  AccountCommand_dump(this,out);
  return;
}

