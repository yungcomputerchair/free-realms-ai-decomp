// addr: 0x013f8020
// name: FUN_013f8020
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint get_field_8(void * this) */

uint __fastcall get_field_8(void *this)

{
                    /* Simple accessor returning the 32-bit field at offset +8; heavily used by
                       game/state code but class cannot be named from this function. */
  return *(uint *)((int)this + 8);
}

