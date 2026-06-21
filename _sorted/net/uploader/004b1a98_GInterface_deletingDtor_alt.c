// addr: 0x004b1a98
// name: GInterface_deletingDtor_alt
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GInterface_deletingDtor_alt(void * this, byte flags_) */

void * __thiscall GInterface_deletingDtor_alt(void *this,byte flags_)

{
                    /* Alternate deleting-destructor wrapper that calls a GInterface destructor
                       implementation and frees the object when requested. */
  GInterface_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

