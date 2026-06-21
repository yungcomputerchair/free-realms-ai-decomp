// addr: 0x013d7b60
// name: PollCommand_AddPollControl_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PollCommand_AddPollControl_ctor(void * this) */

void * __fastcall PollCommand_AddPollControl_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a PollCommand_AddPollControl object by running the common poll
                       command base constructor, installing its vtable, and clearing its payload
                       field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168bb98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PollCommand_ctor(this);
  *(undefined ***)this = PollCommand_AddPollControl::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_c;
  return this;
}

