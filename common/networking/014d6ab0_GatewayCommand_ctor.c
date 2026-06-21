// addr: 0x014d6ab0
// name: GatewayCommand_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GatewayCommand_ctor(void * this) */

void * __fastcall GatewayCommand_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the GatewayCommand base by calling NetworkCommand_ctor and
                       installing GatewayCommand vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad3a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = GatewayCommand::vftable;
  ExceptionList = local_c;
  return this;
}

