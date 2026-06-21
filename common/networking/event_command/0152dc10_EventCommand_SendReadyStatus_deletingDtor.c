// addr: 0x0152dc10
// name: EventCommand_SendReadyStatus_deletingDtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_SendReadyStatus_deletingDtor(void * this, byte flags_) */

void * __thiscall EventCommand_SendReadyStatus_deletingDtor(void *this,byte flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for EventCommand_SendReadyStatus; destroys the
                       base and frees this when flags bit 0 is set. Evidence is the SendReadyStatus
                       vtable plus conditional _free. */
  puStack_8 = &LAB_016bab28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_SendReadyStatus::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

