// addr: 0x014b2350
// name: PollCommand_PollResponse_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PollCommand_PollResponse_ctor(void * this) */

void * __fastcall PollCommand_PollResponse_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PollCommand_PollResponse, invoking its base constructor as needed,
                       assigning PollCommand_PollResponse::vftable, and initializing default fields.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PollCommand_ctor(this);
  *(undefined ***)this = PollCommand_PollResponse::vftable;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

