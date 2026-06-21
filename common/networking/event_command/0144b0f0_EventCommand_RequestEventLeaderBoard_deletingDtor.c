// addr: 0x0144b0f0
// name: EventCommand_RequestEventLeaderBoard_deletingDtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestEventLeaderBoard_deletingDtor(void * this, byte
   flags_) */

void * __thiscall EventCommand_RequestEventLeaderBoard_deletingDtor(void *this,byte flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for EventCommand_RequestEventLeaderBoard; destroys
                       the base and conditionally frees this. Evidence is the class vtable and
                       conditional _free after EventCommand_dtor. */
  puStack_8 = &LAB_0169a938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RequestEventLeaderBoard::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

