// addr: 0x005218a0
// name: GInterface_deletingDtor_variant
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GInterface_deletingDtor_variant(void * this, byte flags_) */

void * __thiscall GInterface_deletingDtor_variant(void *this,byte flags_)

{
                    /* Deleting-destructor wrapper that calls a GInterface destructor implementation
                       and frees this when the low flag bit is set. */
  GInterface_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

