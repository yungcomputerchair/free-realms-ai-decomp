// addr: 0x01535700
// name: EventCommand_SetReady_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SetReady_dtor(void * this) */

void __fastcall EventCommand_SetReady_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_SetReady; resets the class vtable
                       and invokes EventCommand_dtor. Evidence is EventCommand_SetReady::vftable and
                       base destructor call. */
  puStack_8 = &LAB_016bbe18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_SetReady::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

