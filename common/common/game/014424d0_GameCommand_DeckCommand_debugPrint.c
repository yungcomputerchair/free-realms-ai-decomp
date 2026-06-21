// addr: 0x014424d0
// name: GameCommand_DeckCommand_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_DeckCommand_debugPrint(void * cmd) */

void GameCommand_DeckCommand_debugPrint(void *cmd)

{
                    /* Prints the 'Deck Command' header and then delegates to the base command
                       debug-print routine. The class name is inferred from the literal. */
  FUN_01241650("Deck Command\n",0xd);
  FUN_0140c290(cmd);
  return;
}

