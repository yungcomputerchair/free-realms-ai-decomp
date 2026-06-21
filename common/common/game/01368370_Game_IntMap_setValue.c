// addr: 0x01368370
// name: Game_IntMap_setValue
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Game_IntMap_setValue(undefined4 key_, undefined4 value_) */

void Game_IntMap_setValue(undefined4 key_,undefined4 value_)

{
  undefined4 *puVar1;
  
                    /* Finds or creates the map slot for an integer key via FUN_01367610 and stores
                       the supplied value into that slot. */
  puVar1 = (undefined4 *)Game_IntMap_findOrInsertValueSlot(&key_);
  *puVar1 = value_;
  return;
}

