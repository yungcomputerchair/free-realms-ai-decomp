// addr: 0x01344f00
// name: FUN_01344f00
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int unknown_getField28(void * this) */

int __fastcall unknown_getField28(void *this)

{
                    /* Simple getter returning the 32-bit field at this+0x28; callers include
                       Game_setupDeckForPlayer, but the owning class and field identity are not
                       evident. */
  return *(int *)((int)this + 0x28);
}

