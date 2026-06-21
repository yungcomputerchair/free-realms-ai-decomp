// addr: 0x013ee050
// name: NetworkCommand_RequestData_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_RequestData_ctor(void * this) */

void * __fastcall NetworkCommand_RequestData_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkCommand_RequestData by running NetworkCommand_ctor,
                       installing the RequestData vtable, and zeroing its payload field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168edb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = NetworkCommand_RequestData::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_c;
  return this;
}

