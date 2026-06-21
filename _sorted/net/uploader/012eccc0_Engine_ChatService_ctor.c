// addr: 0x012eccc0
// name: Engine_ChatService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_ChatService_ctor(void * this) */

void * __fastcall Engine_ChatService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::ChatService via a base initializer and installs the
                       ChatService vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_ChatServiceBase_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = Engine::ChatService::vftable;
  ExceptionList = local_c;
  return this;
}

