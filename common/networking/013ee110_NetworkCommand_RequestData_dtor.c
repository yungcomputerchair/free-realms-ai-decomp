// addr: 0x013ee110
// name: NetworkCommand_RequestData_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_RequestData_dtor(void * this) */

void __fastcall NetworkCommand_RequestData_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for NetworkCommand_RequestData; restores derived
                       vtable and calls NetworkCommand_dtor. */
  puStack_8 = &LAB_0168ede8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_RequestData::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

