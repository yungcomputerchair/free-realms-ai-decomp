// addr: 0x012f27f0
// name: NetworkService_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkService_dtor_deleting(void * this, char flags_) */

void * __thiscall NetworkService_dtor_deleting(void *this,char flags_)

{
                    /* Deleting destructor wrapper for NetworkService: calls the real destructor
                       helper and frees this when the low flag bit is set. Evidence: standard scalar
                       deleting destructor shape and call to adjacent NetworkService destructor
                       012f2730. */
  NetworkService_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

