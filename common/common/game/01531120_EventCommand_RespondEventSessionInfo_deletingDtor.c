// addr: 0x01531120
// name: EventCommand_RespondEventSessionInfo_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RespondEventSessionInfo_deletingDtor(void * this, char
   flags_) */

void * __thiscall EventCommand_RespondEventSessionInfo_deletingDtor(void *this,char flags_)

{
                    /* Vector-deleting destructor wrapper for EventCommand_RespondEventSessionInfo;
                       it calls the real destructor and frees this when requested by the flag byte.
                        */
  EventCommand_RespondEventSessionInfo_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

