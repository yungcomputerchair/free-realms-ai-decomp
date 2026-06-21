// addr: 0x014fdd10
// name: CommandObject_Reveal_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Reveal_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_Reveal_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_Reveal: calls the class
                       destructor and frees this if requested by flags. */
  CommandObject_Reveal_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

