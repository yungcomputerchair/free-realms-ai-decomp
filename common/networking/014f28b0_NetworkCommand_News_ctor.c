// addr: 0x014f28b0
// name: NetworkCommand_News_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_News_ctor(void * this) */

void * __fastcall NetworkCommand_News_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkCommand_News, installing its vtable and zeroing three
                       vector/container members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b22d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = NetworkCommand_News::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  ExceptionList = local_c;
  return this;
}

