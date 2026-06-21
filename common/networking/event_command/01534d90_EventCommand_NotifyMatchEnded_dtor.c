// addr: 0x01534d90
// name: EventCommand_NotifyMatchEnded_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_NotifyMatchEnded_dtor(void * this) */

void __fastcall EventCommand_NotifyMatchEnded_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_NotifyMatchEnded; resets the class
                       vtable and invokes EventCommand_dtor. Evidence is
                       EventCommand_NotifyMatchEnded::vftable and base destructor call. */
  puStack_8 = &LAB_016bbbd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_NotifyMatchEnded::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

