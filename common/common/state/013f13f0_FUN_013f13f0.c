// addr: 0x013f13f0
// name: FUN_013f13f0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint get_field_1c_if_vector_nonempty(void * this) */

uint __fastcall get_field_1c_if_vector_nonempty(void *this)

{
                    /* Returns field +0x1c only when the vector/span at +0x34..+0x38 is non-empty;
                       otherwise returns 0. */
  if ((*(int *)((int)this + 0x34) != 0) &&
     (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34) >> 2 != 0)) {
    return *(uint *)((int)this + 0x1c);
  }
  return 0;
}

