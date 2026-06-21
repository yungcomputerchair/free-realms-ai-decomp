// addr: 0x014f5dd0
// name: StateHelper_getField8
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateHelper_getField8(void * this) */

int __fastcall StateHelper_getField8(void *this)

{
                    /* Returns the 32-bit field at offset +8. Only one caller is available and no
                       strings identify the class or field. */
  return *(int *)((int)this + 8);
}

