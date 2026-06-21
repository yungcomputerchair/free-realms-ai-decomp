// addr: 0x0144ae90
// name: EventCommand_RequestEventLeaderBoard_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventLeaderBoard_dtor(void * this) */

void __fastcall EventCommand_RequestEventLeaderBoard_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_RequestEventLeaderBoard; resets the
                       class vtable and invokes the EventCommand base destructor. Evidence is the
                       vtable assignment and EventCommand_dtor call. */
  puStack_8 = &LAB_0169a8a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RequestEventLeaderBoard::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

