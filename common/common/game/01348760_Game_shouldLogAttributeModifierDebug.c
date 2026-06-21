// addr: 0x01348760
// name: Game_shouldLogAttributeModifierDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_shouldLogAttributeModifierDebug(void * this) */

bool __fastcall Game_shouldLogAttributeModifierDebug(void *this)

{
                    /* Returns whether verbose attribute/modifier diagnostic logging is enabled for
                       the Game. */
  return *(int *)((int)this + 300) != 0;
}

