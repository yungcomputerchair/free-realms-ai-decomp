// addr: 0x014e37b0
// name: ECommCommand_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ECommCommand_dtor_deleting(void * this, char flags_) */

void * __thiscall ECommCommand_dtor_deleting(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for ECommCommand; restores ECommCommand vtable,
                       calls NetworkCommand_dtor, and optionally frees this. */
  puStack_8 = &LAB_016afa38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = ECommCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

