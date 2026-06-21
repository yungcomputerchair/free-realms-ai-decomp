// addr: 0x013487f0
// name: Game_getFlag_14d
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_getFlag_14d(void * this) */

bool __fastcall Game_getFlag_14d(void *this)

{
                    /* Returns the byte flag at offset +0x14d. It is widely checked by game command
                       and state code, but the available context does not name the field. */
  return (bool)*(undefined1 *)((int)this + 0x14d);
}

