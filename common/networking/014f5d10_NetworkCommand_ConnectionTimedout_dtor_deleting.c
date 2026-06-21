// addr: 0x014f5d10
// name: NetworkCommand_ConnectionTimedout_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_ConnectionTimedout_dtor_deleting(void * this, char
   flags_) */

void * __thiscall NetworkCommand_ConnectionTimedout_dtor_deleting(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for NetworkCommand_ConnectionTimedout; calls
                       NetworkCommand_dtor and optionally frees this. */
  puStack_8 = &LAB_016b2b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_ConnectionTimedout::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

