// addr: 0x01447370
// name: EventCommand_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_dtor(void * this) */

void __fastcall EventCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Base EventCommand destructor: resets the vtable to EventCommand::vftable and
                       runs the base/network command destructor path. Evidence is the direct vtable
                       assignment and many derived EventCommand destructors tail-calling it. */
  puStack_8 = &LAB_01699c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

