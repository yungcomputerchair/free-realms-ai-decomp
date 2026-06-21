// addr: 0x014c83d0
// name: LobbyCommand_ChallengeLeaguePlayerResponse_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChallengeLeaguePlayerResponse_debugPrint(void * this, void *
   out) */

void __thiscall LobbyCommand_ChallengeLeaguePlayerResponse_debugPrint(void *this,void *out)

{
                    /* Appends the 'Challenge League Player Response Lobby Command' header and then
                       emits the base LobbyCommand account id fields. */
  FUN_01241650("Challenge League Player Response Lobby Command\n",0x2f);
  AccountCommand_dump(this,out);
  return;
}

