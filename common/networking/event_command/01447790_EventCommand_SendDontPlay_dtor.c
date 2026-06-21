// addr: 0x01447790
// name: EventCommand_SendDontPlay_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SendDontPlay_dtor(void * this) */

void __fastcall EventCommand_SendDontPlay_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_SendDontPlay; it installs the class
                       vtable and then destroys the EventCommand base. Evidence is
                       EventCommand_SendDontPlay::vftable and the call to EventCommand_dtor. */
  puStack_8 = &LAB_01699d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_SendDontPlay::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

