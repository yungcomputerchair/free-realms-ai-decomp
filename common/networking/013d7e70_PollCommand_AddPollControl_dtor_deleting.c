// addr: 0x013d7e70
// name: PollCommand_AddPollControl_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PollCommand_AddPollControl_dtor_deleting(void * this, char flags_) */

void * __thiscall PollCommand_AddPollControl_dtor_deleting(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for PollCommand_AddPollControl; restores derived
                       vtable, calls PollCommand base destructor, and optionally frees this.
                       Evidence: explicit vtable name and flag-controlled free. */
  puStack_8 = &LAB_0168bc58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PollCommand_AddPollControl::vftable;
  local_4 = 0xffffffff;
  PollCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

