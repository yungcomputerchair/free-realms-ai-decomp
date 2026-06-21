// addr: 0x01347ab0
// name: FUN_01347ab0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool unknown_getGameGuardFlag(void * this) */

bool __fastcall unknown_getGameGuardFlag(void *this)

{
                    /* Simple getter returning the byte flag at this+0x1d8; many game/state
                       functions use it as a guard before processing state or input. */
  return (bool)*(undefined1 *)((int)this + 0x1d8);
}

