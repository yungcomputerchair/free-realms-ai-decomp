// addr: 0x015032a0
// name: CommandObject_MultiPlayer_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_MultiPlayer_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_MultiPlayer_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_MultiPlayer: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_MultiPlayer_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

