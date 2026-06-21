// addr: 0x0150f580
// name: CommandObject_AddGameText_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_AddGameText_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_AddGameText_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_AddGameText: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_AddGameText_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

