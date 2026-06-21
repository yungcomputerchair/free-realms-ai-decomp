// addr: 0x0150b030
// name: CommandObject_Discard_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Discard_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_Discard_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_Discard: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_Discard_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

