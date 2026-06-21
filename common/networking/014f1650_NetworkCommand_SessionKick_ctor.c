// addr: 0x014f1650
// name: NetworkCommand_SessionKick_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_SessionKick_ctor(void * this) */

void * __fastcall NetworkCommand_SessionKick_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkCommand_SessionKick by running NetworkCommand_ctor,
                       installing vtable, and zeroing its scalar field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b1f38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = NetworkCommand_SessionKick::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_c;
  return this;
}

