// addr: 0x014f3390
// name: NetworkCommand_Gift_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_Gift_ctor(void * this) */

void * __fastcall NetworkCommand_Gift_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkCommand_Gift by running NetworkCommand_ctor, installing
                       vtable, and zeroing two scalar fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = NetworkCommand_Gift::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

