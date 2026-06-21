// addr: 0x014f0b90
// name: NetworkCommand_Time_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_Time_ctor(void * this) */

void * __fastcall NetworkCommand_Time_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkCommand_Time, initializing its string member and zeroing
                       time/scalar fields after NetworkCommand_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b1d53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = NetworkCommand_Time::vftable;
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  ExceptionList = local_c;
  return this;
}

