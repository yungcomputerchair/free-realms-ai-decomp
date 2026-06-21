// addr: 0x01354000
// name: Game_logEndsInAdjournment
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_logEndsInAdjournment(void * game) */

void __fastcall Game_logEndsInAdjournment(void *game)

{
  undefined4 unaff_ESI;
  
                    /* Logs that the game ends in adjournment and then invokes a virtual game-end
                       callback. */
  Game_logGeneral(game,"GAME ENDS IN ADJOURNMENT",unaff_ESI);
                    /* WARNING: Could not recover jumptable at 0x0135401c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)game + 0x1d0))();
  return;
}

