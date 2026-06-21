// addr: 0x0152cc10
// name: EventCommand_RespondCurrentSessionInfo_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondCurrentSessionInfo_dtor(void * this) */

void __fastcall EventCommand_RespondCurrentSessionInfo_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for EventCommand_RespondCurrentSessionInfo; resets
                       the class vtable and invokes EventCommand_dtor. Evidence is the class vtable
                       assignment and base destructor call. */
  puStack_8 = &LAB_016ba7b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RespondCurrentSessionInfo::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

