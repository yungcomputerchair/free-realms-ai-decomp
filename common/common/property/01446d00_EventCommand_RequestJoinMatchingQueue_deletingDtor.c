// addr: 0x01446d00
// name: EventCommand_RequestJoinMatchingQueue_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestJoinMatchingQueue_deletingDtor(void * this, int
   flags) */

void * __thiscall EventCommand_RequestJoinMatchingQueue_deletingDtor(void *this,int flags)

{
                    /* Scalar deleting destructor for EventCommand_RequestJoinMatchingQueue. It
                       calls the real destructor FUN_01446b50 and frees this when flags&1 is set. */
  EventCommand_RequestJoinMatchingQueue_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

