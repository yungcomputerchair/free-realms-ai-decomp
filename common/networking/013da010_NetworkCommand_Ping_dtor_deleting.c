// addr: 0x013da010
// name: NetworkCommand_Ping_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_Ping_dtor_deleting(void * this, char flags_) */

void * __thiscall NetworkCommand_Ping_dtor_deleting(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for NetworkCommand_Ping; restores Ping vtable,
                       calls NetworkCommand_dtor, and frees this when requested. */
  puStack_8 = &LAB_0168c288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_Ping::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

