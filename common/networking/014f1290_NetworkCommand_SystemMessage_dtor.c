// addr: 0x014f1290
// name: NetworkCommand_SystemMessage_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_SystemMessage_dtor(void * this) */

void __fastcall NetworkCommand_SystemMessage_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for NetworkCommand_SystemMessage; frees its message
                       string and calls NetworkCommand_dtor. */
  puStack_8 = &LAB_016b1e83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_SystemMessage::vftable;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

