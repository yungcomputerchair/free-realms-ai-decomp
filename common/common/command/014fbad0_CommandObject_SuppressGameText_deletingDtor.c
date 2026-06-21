// addr: 0x014fbad0
// name: CommandObject_SuppressGameText_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_SuppressGameText_deletingDtor(void * this, char flags_)
    */

void * __thiscall CommandObject_SuppressGameText_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_SuppressGameText: calls its
                       destructor and conditionally frees this. */
  CommandObject_SuppressGameText_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

