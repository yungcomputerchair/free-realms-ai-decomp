// addr: 0x0052503b
// name: GSynchronizationObject_deletingDtor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GSynchronizationObject_deletingDtor(void * this, char flags_) */

void * __thiscall GSynchronizationObject_deletingDtor(void *this,char flags_)

{
                    /* Calls the synchronization object destructor, then frees the object when the
                       low bit of the deleting-destructor flags is set. Standard scalar deleting
                       destructor wrapper for this class. */
  GSynchronizationObject_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

