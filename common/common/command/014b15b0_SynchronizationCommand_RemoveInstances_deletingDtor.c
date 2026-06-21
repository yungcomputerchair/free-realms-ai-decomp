// addr: 0x014b15b0
// name: SynchronizationCommand_RemoveInstances_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_RemoveInstances_deletingDtor(void * this, char
   flags) */

void * __thiscall SynchronizationCommand_RemoveInstances_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor for SynchronizationCommand_RemoveInstances; invokes the
                       complete destructor and frees this when requested. */
  SynchronizationCommand_RemoveInstances_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

