// addr: 0x014f19e0
// name: NetworkCommand_SessionKick_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_SessionKick_dtor_deleting(void * this, char flags_) */

void * __thiscall NetworkCommand_SessionKick_dtor_deleting(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for NetworkCommand_SessionKick; calls
                       NetworkCommand_dtor and optionally frees this. */
  puStack_8 = &LAB_016b2028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_SessionKick::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

