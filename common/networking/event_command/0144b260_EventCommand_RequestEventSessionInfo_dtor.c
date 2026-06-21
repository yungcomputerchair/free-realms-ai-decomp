// addr: 0x0144b260
// name: EventCommand_RequestEventSessionInfo_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventSessionInfo_dtor(void * this) */

void __fastcall EventCommand_RequestEventSessionInfo_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_RequestEventSessionInfo; resets the
                       class vtable and invokes EventCommand_dtor. Evidence is the class vtable
                       assignment and base destructor call. */
  puStack_8 = &LAB_0169a998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RequestEventSessionInfo::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

