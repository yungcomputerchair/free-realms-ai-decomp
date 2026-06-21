// addr: 0x0144ac50
// name: EventCommand_RequestEventSessionsOnDay_deletingDtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestEventSessionsOnDay_deletingDtor(void * this, byte
   flags_) */

void * __thiscall EventCommand_RequestEventSessionsOnDay_deletingDtor(void *this,byte flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for EventCommand_RequestEventSessionsOnDay;
                       destroys the base and frees this when requested. Evidence is the class
                       vtable, EventCommand_dtor call, and flags-controlled _free. */
  puStack_8 = &LAB_0169a848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RequestEventSessionsOnDay::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

