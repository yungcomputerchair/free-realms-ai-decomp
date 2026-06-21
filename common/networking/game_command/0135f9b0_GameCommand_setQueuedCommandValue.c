// addr: 0x0135f9b0
// name: GameCommand_setQueuedCommandValue
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_setQueuedCommandValue(int key, int value) */

void GameCommand_setQueuedCommandValue(int key,int value)

{
  int *piVar1;
  int in_ECX;
  
                    /* Looks up/inserts an entry through a tree/map helper and assigns the value. It
                       is used by the GameCommand execute prologue while iterating the command's
                       queued map entries. */
  piVar1 = IntDefaultMap_getOrInsert((void *)(in_ECX + 0x248),&key);
  *piVar1 = value;
  return;
}

