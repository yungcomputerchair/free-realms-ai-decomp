// addr: 0x01509950
// name: CommandObject_EmitSound_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_EmitSound_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_EmitSound_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_EmitSound: calls the class
                       destructor and conditionally frees this when flags & 1 is set. */
  CommandObject_EmitSound_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

