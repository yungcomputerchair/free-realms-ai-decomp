// addr: 0x014f9e70
// name: CommandObject_While_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_While_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_While_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_While: calls the class
                       destructor and conditionally frees the object based on the low flag bit. */
  CommandObject_While_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

