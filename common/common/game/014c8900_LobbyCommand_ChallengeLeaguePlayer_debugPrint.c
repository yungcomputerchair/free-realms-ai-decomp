// addr: 0x014c8900
// name: LobbyCommand_ChallengeLeaguePlayer_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChallengeLeaguePlayer_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_ChallengeLeaguePlayer_debugPrint(void *this,void *out)

{
                    /* Appends the 'Challenge League Player Lobby Command' header and then emits the
                       base LobbyCommand account id fields. */
  FUN_01241650("Challenge League Player Lobby Command\n",0x26);
  AccountCommand_dump(this,out);
  return;
}

