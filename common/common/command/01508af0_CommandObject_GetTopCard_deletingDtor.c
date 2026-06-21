// addr: 0x01508af0
// name: CommandObject_GetTopCard_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_GetTopCard_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_GetTopCard_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_GetTopCard: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_GetTopCard_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

