// addr: 0x0152d6f0
// name: EventCommand_SendEventPlayerFlags_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_SendEventPlayerFlags_deletingDtor(void * this, char
   flags_) */

void * __thiscall EventCommand_SendEventPlayerFlags_deletingDtor(void *this,char flags_)

{
                    /* Vector-deleting destructor wrapper for EventCommand_SendEventPlayerFlags; it
                       calls the real destructor and frees this when requested by the flag byte. */
  FUN_0152d380();
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

