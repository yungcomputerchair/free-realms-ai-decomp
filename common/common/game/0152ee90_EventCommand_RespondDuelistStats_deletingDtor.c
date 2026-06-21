// addr: 0x0152ee90
// name: EventCommand_RespondDuelistStats_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RespondDuelistStats_deletingDtor(void * this, char flags_)
    */

void * __thiscall EventCommand_RespondDuelistStats_deletingDtor(void *this,char flags_)

{
                    /* Vector-deleting destructor wrapper for EventCommand_RespondDuelistStats; it
                       calls the real destructor and frees this when requested by the flag byte. */
  EventCommand_RespondDuelistStats_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

