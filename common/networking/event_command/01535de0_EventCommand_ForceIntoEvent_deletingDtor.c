// addr: 0x01535de0
// name: EventCommand_ForceIntoEvent_deletingDtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_ForceIntoEvent_deletingDtor(void * this, byte flags_) */

void * __thiscall EventCommand_ForceIntoEvent_deletingDtor(void *this,byte flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for EventCommand_ForceIntoEvent; destroys the base
                       and conditionally frees this. Evidence is class vtable and flags-controlled
                       _free. */
  puStack_8 = &LAB_016bbf98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_ForceIntoEvent::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

