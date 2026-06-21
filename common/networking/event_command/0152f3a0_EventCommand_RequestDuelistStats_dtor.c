// addr: 0x0152f3a0
// name: EventCommand_RequestDuelistStats_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestDuelistStats_dtor(void * this) */

void __fastcall EventCommand_RequestDuelistStats_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_RequestDuelistStats; resets the
                       class vtable and invokes EventCommand_dtor. Evidence is
                       EventCommand_RequestDuelistStats::vftable and base destructor call. */
  puStack_8 = &LAB_016baee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RequestDuelistStats::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

