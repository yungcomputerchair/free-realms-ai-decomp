// addr: 0x014d6b70
// name: GatewayCommand_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GatewayCommand_dtor(void * this) */

void __fastcall GatewayCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for GatewayCommand; restores GatewayCommand vtable
                       and calls NetworkCommand_dtor. */
  puStack_8 = &LAB_016ad3d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GatewayCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

