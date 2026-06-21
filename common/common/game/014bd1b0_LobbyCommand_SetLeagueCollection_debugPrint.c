// addr: 0x014bd1b0
// name: LobbyCommand_SetLeagueCollection_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetLeagueCollection_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_SetLeagueCollection_debugPrint(void *this,void *out)

{
                    /* Appends the 'Set League Collection Lobby Command' header and then emits the
                       base LobbyCommand account id fields. */
  FUN_01241650("Set League Collection Lobby Command\n",0x24);
  AccountCommand_dump(this,out);
  return;
}

