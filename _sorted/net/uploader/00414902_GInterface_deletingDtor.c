// addr: 0x00414902
// name: GInterface_deletingDtor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GInterface_deletingDtor(void * this, byte flags_) */

void * __thiscall GInterface_deletingDtor(void *this,byte flags_)

{
                    /* Deleting destructor wrapper for GInterface: runs GInterface_dtor and frees
                       the object when the low flag bit is set. */
  GInterface_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

