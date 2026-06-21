// addr: 0x01506180
// name: CommandObject_Kill_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Kill_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_Kill_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_Kill: calls the class destructor
                       and conditionally frees this when flags & 1 is set. */
  CommandObject_Kill_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

