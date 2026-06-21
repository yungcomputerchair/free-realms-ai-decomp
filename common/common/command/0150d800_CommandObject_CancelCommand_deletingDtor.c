// addr: 0x0150d800
// name: CommandObject_CancelCommand_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_CancelCommand_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_CancelCommand_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_CancelCommand: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_CancelCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

