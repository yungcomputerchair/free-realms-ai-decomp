// addr: 0x0152d020
// name: EventCommand_RespondCurrentSessionInfo_deletingDtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RespondCurrentSessionInfo_deletingDtor(void * this, byte
   flags_) */

void * __thiscall EventCommand_RespondCurrentSessionInfo_deletingDtor(void *this,byte flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for EventCommand_RespondCurrentSessionInfo;
                       destroys the base and conditionally frees this. Evidence is the vtable
                       assignment, EventCommand_dtor call, and flags-controlled _free. */
  puStack_8 = &LAB_016ba878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RespondCurrentSessionInfo::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

