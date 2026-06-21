// addr: 0x014b2810
// name: PollCommand_AddPoll_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PollCommand_AddPoll_ctor(void * this) */

void * __fastcall PollCommand_AddPoll_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PollCommand_AddPoll, invoking its base constructor as needed,
                       assigning PollCommand_AddPoll::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7418;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PollCommand_ctor(this);
  *(undefined ***)this = PollCommand_AddPoll::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_c;
  return this;
}

