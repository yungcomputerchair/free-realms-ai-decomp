// addr: 0x0144a980
// name: EventCommand_RequestEventSessionsOnDay_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventSessionsOnDay_dtor(void * this) */

void __fastcall EventCommand_RequestEventSessionsOnDay_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_RequestEventSessionsOnDay; resets
                       the class vtable and invokes the EventCommand base destructor. Evidence is
                       the vtable assignment and EventCommand_dtor call. */
  puStack_8 = &LAB_0169a7b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RequestEventSessionsOnDay::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

