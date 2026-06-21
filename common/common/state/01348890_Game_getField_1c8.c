// addr: 0x01348890
// name: Game_getField_1c8
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_getField_1c8(void * this) */

int __fastcall Game_getField_1c8(void *this)

{
                    /* Returns the 32-bit field at offset +0x1c8. Only a few state callers reference
                       it and no string evidence names the field. */
  return *(int *)((int)this + 0x1c8);
}

