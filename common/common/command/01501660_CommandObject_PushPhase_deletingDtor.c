// addr: 0x01501660
// name: CommandObject_PushPhase_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_PushPhase_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_PushPhase_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_PushPhase: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_PushPhase_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

