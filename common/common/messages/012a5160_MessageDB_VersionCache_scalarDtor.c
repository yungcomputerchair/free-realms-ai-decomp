// addr: 0x012a5160
// name: MessageDB_VersionCache_scalarDtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_VersionCache_scalarDtor(void * this, char flags_) */

void * __thiscall MessageDB_VersionCache_scalarDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for the per-version cache object. It destroys
                       embedded maps and optionally frees the object. */
  MessageDB_VersionCache_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

