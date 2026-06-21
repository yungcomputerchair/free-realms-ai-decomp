// addr: 0x01500b20
// name: CommandObject_RemoveInheritedGameText_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_RemoveInheritedGameText_deletingDtor(void * this, char
   flags_) */

void * __thiscall CommandObject_RemoveInheritedGameText_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_RemoveInheritedGameText: calls
                       its destructor and conditionally frees the object. */
  CommandObject_RemoveInheritedGameText_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

