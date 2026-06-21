// addr: 0x014b0690
// name: SynchronizationCommand_SendInstances_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_SendInstances_deletingDtor(void * this, char
   flags) */

void * __thiscall SynchronizationCommand_SendInstances_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor for SynchronizationCommand_SendInstances; invokes the
                       complete destructor and releases object storage if requested. */
  SynchronizationCommand_SendInstances_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

