// addr: 0x0145a0e0
// name: GameCommand_SetupCWGame_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SetupCWGame_dump(void * this) */

void GameCommand_SetupCWGame_dump(void *this)

{
  void *in_ECX;
  
                    /* Dumps a Setup CWGame command and then forwards to the richer setup-game
                       command dump implementation. */
  FUN_01241650("Setup CWGame Game Command\n",0x1a);
  GameCommand_SetupGame_debugPrint(in_ECX,this);
  return;
}

