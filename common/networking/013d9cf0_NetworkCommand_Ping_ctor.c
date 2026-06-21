// addr: 0x013d9cf0
// name: NetworkCommand_Ping_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_Ping_ctor(void * this) */

void * __fastcall NetworkCommand_Ping_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkCommand_Ping by running the NetworkCommand base
                       constructor, installing the Ping vtable, and clearing its payload field.
                       Evidence: explicit NetworkCommand_Ping::vftable and call to
                       NetworkCommand_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168c1c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = NetworkCommand_Ping::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_c;
  return this;
}

