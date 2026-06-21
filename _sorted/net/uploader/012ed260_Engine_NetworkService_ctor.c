// addr: 0x012ed260
// name: Engine_NetworkService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_NetworkService_ctor(void * this) */

void * __fastcall Engine_NetworkService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::NetworkService from Engine::FRTWNetworkService and
                       installs the NetworkService vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016737e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_FRTWNetworkService_ctor(this);
  *(undefined ***)this = Engine::NetworkService::vftable;
  ExceptionList = local_c;
  return this;
}

