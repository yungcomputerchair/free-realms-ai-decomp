// addr: 0x014f1fc0
// name: NetworkCommand_PendingSessionKick_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_PendingSessionKick_dtor(void * this) */

void __fastcall NetworkCommand_PendingSessionKick_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for NetworkCommand_PendingSessionKick; restores
                       vtable and calls NetworkCommand_dtor. */
  puStack_8 = &LAB_016b21a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_PendingSessionKick::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

