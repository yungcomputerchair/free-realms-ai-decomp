// addr: 0x014bc620
// name: LobbyCommand_SetLeagueInfo_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetLeagueInfo_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_SetLeagueInfo_debugPrint(void *this,void *out)

{
                    /* Appends the 'Set League Info Lobby Command' header and then emits the base
                       LobbyCommand account id fields. */
  FUN_01241650("Set League Info Lobby Command\n",0x1e);
  AccountCommand_dump(this,out);
  return;
}

