// addr: 0x013d9db0
// name: NetworkCommand_Ping_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_Ping_dtor(void * this) */

void __fastcall NetworkCommand_Ping_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for NetworkCommand_Ping; restores Ping vtable and
                       calls NetworkCommand base destructor. Evidence: explicit
                       NetworkCommand_Ping::vftable and call to NetworkCommand_dtor. */
  puStack_8 = &LAB_0168c1f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_Ping::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

