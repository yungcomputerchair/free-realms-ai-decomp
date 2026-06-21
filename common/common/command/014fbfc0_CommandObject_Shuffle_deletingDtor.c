// addr: 0x014fbfc0
// name: CommandObject_Shuffle_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Shuffle_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_Shuffle_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_Shuffle: invokes the class
                       destructor and conditionally frees the allocation. */
  CommandObject_Shuffle_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

