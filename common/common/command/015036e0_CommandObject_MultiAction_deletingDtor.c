// addr: 0x015036e0
// name: CommandObject_MultiAction_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_MultiAction_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_MultiAction_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_MultiAction: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_MultiAction_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

