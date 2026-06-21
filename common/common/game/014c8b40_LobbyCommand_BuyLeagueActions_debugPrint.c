// addr: 0x014c8b40
// name: LobbyCommand_BuyLeagueActions_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_BuyLeagueActions_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_BuyLeagueActions_debugPrint(void *this,void *out)

{
                    /* Appends the 'Buy League Actions Lobby Command' header and then emits the base
                       LobbyCommand account id fields. */
  FUN_01241650("Buy League Actions Lobby Command\n",0x21);
  AccountCommand_dump(this,out);
  return;
}

