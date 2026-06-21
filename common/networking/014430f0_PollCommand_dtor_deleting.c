// addr: 0x014430f0
// name: PollCommand_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PollCommand_dtor_deleting(void * this, char flags_) */

void * __thiscall PollCommand_dtor_deleting(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for PollCommand; restores vtable, calls
                       NetworkCommand_dtor, and optionally frees this. */
  puStack_8 = &LAB_016991b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PollCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

