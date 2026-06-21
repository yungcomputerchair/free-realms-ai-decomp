// addr: 0x014f1af0
// name: NetworkCommand_QueryDisconnect_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_QueryDisconnect_ctor(void * this) */

void * __fastcall NetworkCommand_QueryDisconnect_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkCommand_QueryDisconnect by running NetworkCommand_ctor and
                       installing its vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = NetworkCommand_QueryDisconnect::vftable;
  ExceptionList = local_c;
  return this;
}

