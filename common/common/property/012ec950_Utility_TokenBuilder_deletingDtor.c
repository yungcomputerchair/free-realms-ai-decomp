// addr: 0x012ec950
// name: Utility_TokenBuilder_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Utility_TokenBuilder_deletingDtor(void * this, char flags) */

void * __thiscall Utility_TokenBuilder_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for Utility::TokenBuilder. It calls
                       Utility_TokenBuilder_dtor and frees the object when flags bit 0 is set. */
  Utility_TokenBuilder_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

