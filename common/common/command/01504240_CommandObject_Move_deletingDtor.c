// addr: 0x01504240
// name: CommandObject_Move_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Move_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_Move_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_Move: calls the class destructor
                       and conditionally frees this when flags & 1 is set. */
  CommandObject_Move_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

