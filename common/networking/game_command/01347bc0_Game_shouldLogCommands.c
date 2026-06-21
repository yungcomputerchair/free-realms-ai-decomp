// addr: 0x01347bc0
// name: Game_shouldLogCommands
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: char Game_shouldLogCommands(void) */

char Game_shouldLogCommands(void)

{
                    /* Returns false for a command/game debug logging predicate. It gates '-->
                       command' tracing in GameCommand.cpp and detailed setActivePlayer logging. */
  return '\0';
}

