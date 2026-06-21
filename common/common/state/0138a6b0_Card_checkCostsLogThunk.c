// addr: 0x0138a6b0
// name: Card_checkCostsLogThunk
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool Card_checkCostsLogThunk(void) */

bool Card_checkCostsLogThunk(void)

{
  undefined4 uVar1;
  void *game;
  char *fmt;
  
                    /* Logs Card::checkCosts with the current card id and returns true. */
  uVar1 = FUN_01321f20();
  uVar1 = PlayElement_getId(uVar1);
  fmt = "Card::checkCosts %d, %d";
  game = (void *)FUN_01340340();
  Game_logGeneral(game,fmt,uVar1);
  return true;
}

