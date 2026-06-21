// addr: 0x014d6da0
// name: GatewayCommand_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GatewayCommand_dtor_deleting(void * this, char flags_) */

void * __thiscall GatewayCommand_dtor_deleting(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for GatewayCommand; calls NetworkCommand_dtor and
                       optionally frees this. */
  puStack_8 = &LAB_016ad468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GatewayCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

