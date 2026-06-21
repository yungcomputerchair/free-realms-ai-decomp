// addr: 0x014599d0
// name: GameCommand_CWLaunchGameMatch_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_CWLaunchGameMatch_dump(void * this) */

void GameCommand_CWLaunchGameMatch_dump(void *this)

{
  void *in_ECX;
  
                    /* Dumps a CWLaunch Game Match command and then reuses the Launch Game Match
                       dump/base path. */
  FUN_01241650("CWLaunch Game Match Command\n",0x1c);
  MatchCommand_LaunchGame_dump(in_ECX);
  return;
}

