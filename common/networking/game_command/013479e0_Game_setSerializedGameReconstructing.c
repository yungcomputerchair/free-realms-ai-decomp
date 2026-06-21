// addr: 0x013479e0
// name: Game_setSerializedGameReconstructing
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_setSerializedGameReconstructing(void * this, char reconstructing) */

void __thiscall Game_setSerializedGameReconstructing(void *this,char reconstructing)

{
                    /* Sets a Game boolean at offset 0x304 while a serialized game is being
                       reconstructed. Evidence is the sole caller
                       GameCommandSendSerializedGame::execute, immediately before calling the
                       reconstruct routine and logging reconstruction success/failure. */
  *(char *)((int)this + 0x304) = reconstructing;
  return;
}

