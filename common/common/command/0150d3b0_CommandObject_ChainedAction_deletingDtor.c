// addr: 0x0150d3b0
// name: CommandObject_ChainedAction_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_ChainedAction_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_ChainedAction_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_ChainedAction: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_ChainedAction_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

