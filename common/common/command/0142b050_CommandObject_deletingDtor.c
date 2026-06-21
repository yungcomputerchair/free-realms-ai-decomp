// addr: 0x0142b050
// name: CommandObject_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject: calls the real CommandObject
                       destructor and frees this when the low flag bit is set. Evidence is the
                       direct call to the known base destructor and standard deleting-dtor shape. */
  CommandObject_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

