// addr: 0x01535270
// name: EventCommand_NextMatchingTime_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_NextMatchingTime_dtor(void * this) */

void __fastcall EventCommand_NextMatchingTime_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_NextMatchingTime; resets the class
                       vtable and invokes EventCommand_dtor. Evidence is
                       EventCommand_NextMatchingTime::vftable and base destructor call. */
  puStack_8 = &LAB_016bbcf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_NextMatchingTime::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

