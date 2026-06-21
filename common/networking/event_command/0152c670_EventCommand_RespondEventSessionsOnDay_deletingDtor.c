// addr: 0x0152c670
// name: EventCommand_RespondEventSessionsOnDay_deletingDtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RespondEventSessionsOnDay_deletingDtor(void * this, byte
   flags_) */

void * __thiscall EventCommand_RespondEventSessionsOnDay_deletingDtor(void *this,byte flags_)

{
                    /* Scalar deleting destructor wrapper for
                       EventCommand_RespondEventSessionsOnDay; calls the real destructor and
                       conditionally frees this. Evidence is the call to
                       EventCommand_RespondEventSessionsOnDay_dtor followed by flags-controlled
                       _free. */
  EventCommand_RespondEventSessionsOnDay_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

