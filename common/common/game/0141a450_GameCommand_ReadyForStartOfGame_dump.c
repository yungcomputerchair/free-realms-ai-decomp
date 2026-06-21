// addr: 0x0141a450
// name: GameCommand_ReadyForStartOfGame_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ReadyForStartOfGame_dump(void * this) */

void GameCommand_ReadyForStartOfGame_dump(void *this)

{
  void *in_ECX;
  
                    /* Dumps a Ready For Start Of Game game command, then emits the common
                       GameCommand fields. */
  FUN_01241650("Ready For Start Of Game Game Command\n",0x25);
  GameCommand_dump(in_ECX,this);
  return;
}

