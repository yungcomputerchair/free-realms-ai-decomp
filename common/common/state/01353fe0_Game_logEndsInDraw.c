// addr: 0x01353fe0
// name: Game_logEndsInDraw
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_logEndsInDraw(void * game) */

void __fastcall Game_logEndsInDraw(void *game)

{
  undefined4 unaff_ESI;
  
                    /* Logs that the game ends in a draw and then invokes a virtual game-end
                       callback. */
  Game_logGeneral(game,"GAME ENDS IN A DRAW",unaff_ESI);
                    /* WARNING: Could not recover jumptable at 0x01353ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)game + 0x1d0))();
  return;
}

