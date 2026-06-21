// addr: 0x014b2410
// name: PollCommand_PollResponse_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_PollResponse_dtor(void * this) */

void __fastcall PollCommand_PollResponse_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for PollCommand_PollResponse; restores vtable and
                       calls PollCommand_dtor. */
  puStack_8 = &LAB_016a7358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PollCommand_PollResponse::vftable;
  local_4 = 0xffffffff;
  PollCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

