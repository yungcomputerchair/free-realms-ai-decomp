// addr: 0x013d7c20
// name: PollCommand_AddPollControl_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_AddPollControl_dtor(void * this) */

void __fastcall PollCommand_AddPollControl_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for PollCommand_AddPollControl, restoring its vtable
                       and invoking the PollCommand base destructor. Evidence: explicit
                       PollCommand_AddPollControl::vftable and call to PollCommand destructor
                       helper. */
  puStack_8 = &LAB_0168bbc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PollCommand_AddPollControl::vftable;
  local_4 = 0xffffffff;
  PollCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

