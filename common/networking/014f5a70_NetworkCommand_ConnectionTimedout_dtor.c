// addr: 0x014f5a70
// name: NetworkCommand_ConnectionTimedout_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_ConnectionTimedout_dtor(void * this) */

void __fastcall NetworkCommand_ConnectionTimedout_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for NetworkCommand_ConnectionTimedout; restores
                       vtable and calls NetworkCommand_dtor. */
  puStack_8 = &LAB_016b2aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_ConnectionTimedout::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

