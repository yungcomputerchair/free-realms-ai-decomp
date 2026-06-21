// addr: 0x0152f8e0
// name: EventCommand_SendByeNotification_deletingDtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_SendByeNotification_deletingDtor(void * this, byte flags_)
    */

void * __thiscall EventCommand_SendByeNotification_deletingDtor(void *this,byte flags_)

{
                    /* Scalar deleting destructor wrapper for EventCommand_SendByeNotification;
                       calls the real destructor then frees this if flags bit 0 is set. Evidence is
                       the destructor call followed by conditional _free. */
  EventCommand_SendByeNotification_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

