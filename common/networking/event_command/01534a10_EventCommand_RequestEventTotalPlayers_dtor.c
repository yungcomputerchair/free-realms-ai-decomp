// addr: 0x01534a10
// name: EventCommand_RequestEventTotalPlayers_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventTotalPlayers_dtor(void * this) */

void __fastcall EventCommand_RequestEventTotalPlayers_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_RequestEventTotalPlayers; resets the
                       class vtable and invokes EventCommand_dtor. Evidence is
                       EventCommand_RequestEventTotalPlayers::vftable and base destructor call. */
  puStack_8 = &LAB_016bbae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RequestEventTotalPlayers::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

