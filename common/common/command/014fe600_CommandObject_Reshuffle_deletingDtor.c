// addr: 0x014fe600
// name: CommandObject_Reshuffle_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Reshuffle_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_Reshuffle_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_Reshuffle: invokes the class
                       destructor and conditionally frees the object. */
  CommandObject_Reshuffle_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

