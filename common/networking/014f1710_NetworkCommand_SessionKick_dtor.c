// addr: 0x014f1710
// name: NetworkCommand_SessionKick_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_SessionKick_dtor(void * this) */

void __fastcall NetworkCommand_SessionKick_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for NetworkCommand_SessionKick; restores vtable and
                       calls NetworkCommand_dtor. */
  puStack_8 = &LAB_016b1f68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_SessionKick::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

