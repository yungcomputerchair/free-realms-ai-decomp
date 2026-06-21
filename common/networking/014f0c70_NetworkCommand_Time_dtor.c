// addr: 0x014f0c70
// name: NetworkCommand_Time_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_Time_dtor(void * this) */

void __fastcall NetworkCommand_Time_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for NetworkCommand_Time; frees its string member if
                       heap allocated and calls NetworkCommand_dtor. */
  puStack_8 = &LAB_016b1d83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_Time::vftable;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x34)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x20));
  }
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

