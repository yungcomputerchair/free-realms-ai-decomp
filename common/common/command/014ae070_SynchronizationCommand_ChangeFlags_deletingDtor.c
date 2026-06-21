// addr: 0x014ae070
// name: SynchronizationCommand_ChangeFlags_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_ChangeFlags_deletingDtor(void * this, char
   flags) */

void * __thiscall SynchronizationCommand_ChangeFlags_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor for SynchronizationCommand_ChangeFlags; calls the
                       complete destructor and frees this if requested. */
  SynchronizationCommand_ChangeFlags_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

