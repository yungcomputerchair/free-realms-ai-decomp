// addr: 0x0150c6c0
// name: CommandObject_CreateCard_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_CreateCard_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_CreateCard_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_CreateCard: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_CreateCard_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

