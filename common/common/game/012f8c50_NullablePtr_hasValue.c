// addr: 0x012f8c50
// name: NullablePtr_hasValue
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NullablePtr_hasValue(int * slot) */

bool __fastcall NullablePtr_hasValue(int *slot)

{
                    /* Returns true when the first pointer-sized field is non-null. */
  return *slot != 0;
}

