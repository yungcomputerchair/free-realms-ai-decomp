// addr: 0x015003e0
// name: CommandObject_RemoveInstalledAction_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_RemoveInstalledAction_deletingDtor(void * this, char
   flags_) */

void * __thiscall CommandObject_RemoveInstalledAction_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_RemoveInstalledAction: calls the
                       class destructor and conditionally frees this. */
  CommandObject_RemoveInstalledAction_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

