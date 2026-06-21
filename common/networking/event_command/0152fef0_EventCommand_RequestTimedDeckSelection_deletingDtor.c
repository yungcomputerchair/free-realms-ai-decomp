// addr: 0x0152fef0
// name: EventCommand_RequestTimedDeckSelection_deletingDtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestTimedDeckSelection_deletingDtor(void * this, byte
   flags_) */

void * __thiscall EventCommand_RequestTimedDeckSelection_deletingDtor(void *this,byte flags_)

{
                    /* Scalar deleting destructor wrapper for
                       EventCommand_RequestTimedDeckSelection; calls the real destructor and
                       conditionally frees this. Evidence is the call to
                       EventCommand_RequestTimedDeckSelection_dtor and flags-controlled _free. */
  EventCommand_RequestTimedDeckSelection_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

