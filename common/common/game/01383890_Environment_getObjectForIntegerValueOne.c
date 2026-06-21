// addr: 0x01383890
// name: Environment_getObjectForIntegerValueOne
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Environment_getObjectForIntegerValueOne(void) */

void Environment_getObjectForIntegerValueOne(void)

{
  int playerId_;
  int in_ECX;
  
                    /* Fetches integer value id 1 from a value/environment object via FUN_01383460
                       and resolves it to an object through FUN_01350660. */
  playerId_ = FUN_01383460(1);
  PlayArea_findPlayerElementById(*(void **)(in_ECX + 4),playerId_);
  return;
}

