// addr: 0x0144a810
// name: EventCommand_RequestCurrentSessionInfo_deletingDtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestCurrentSessionInfo_deletingDtor(void * this, byte
   flags_) */

void * __thiscall EventCommand_RequestCurrentSessionInfo_deletingDtor(void *this,byte flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for EventCommand_RequestCurrentSessionInfo; it
                       destroys the EventCommand base and conditionally frees this. Evidence is the
                       RequestCurrentSessionInfo vtable and conditional _free. */
  puStack_8 = &LAB_0169a758;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RequestCurrentSessionInfo::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

