// addr: 0x0152de00
// name: EventCommand_RespondPlayerStats_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondPlayerStats_dtor(void * this) */

void __fastcall EventCommand_RespondPlayerStats_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_RespondPlayerStats; resets the class
                       vtable and invokes EventCommand_dtor. Evidence is
                       EventCommand_RespondPlayerStats::vftable and the base destructor call. */
  puStack_8 = &LAB_016bab88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RespondPlayerStats::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

