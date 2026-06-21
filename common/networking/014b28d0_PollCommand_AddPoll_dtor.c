// addr: 0x014b28d0
// name: PollCommand_AddPoll_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_AddPoll_dtor(void * this) */

void __fastcall PollCommand_AddPoll_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for PollCommand_AddPoll; restores vtable and calls
                       PollCommand_dtor. */
  puStack_8 = &LAB_016a7448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PollCommand_AddPoll::vftable;
  local_4 = 0xffffffff;
  PollCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

