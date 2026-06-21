// addr: 0x01530340
// name: EventCommand_RespondEventTotalPlayers_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventTotalPlayers_dtor(void * this) */

void __fastcall EventCommand_RespondEventTotalPlayers_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_RespondEventTotalPlayers; resets the
                       class vtable and invokes EventCommand_dtor. Evidence is the vtable assignment
                       and EventCommand base destructor call. */
  puStack_8 = &LAB_016bb2f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RespondEventTotalPlayers::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

