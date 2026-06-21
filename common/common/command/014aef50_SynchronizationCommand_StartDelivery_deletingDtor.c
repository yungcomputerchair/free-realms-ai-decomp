// addr: 0x014aef50
// name: SynchronizationCommand_StartDelivery_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_StartDelivery_deletingDtor(void * this, char
   flags) */

void * __thiscall SynchronizationCommand_StartDelivery_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor for SynchronizationCommand_StartDelivery; runs the full
                       destructor, including string cleanup, and optionally frees this. */
  SynchronizationCommand_StartDelivery_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

