// addr: 0x01505bf0
// name: CommandObject_LoseGame_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_LoseGame_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_LoseGame_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_LoseGame: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_LoseGame_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

