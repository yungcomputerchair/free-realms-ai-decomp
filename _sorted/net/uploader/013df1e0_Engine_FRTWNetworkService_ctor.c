// addr: 0x013df1e0
// name: Engine_FRTWNetworkService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_FRTWNetworkService_ctor(void * this) */

void * __fastcall Engine_FRTWNetworkService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::FRTWNetworkService by running a base initializer,
                       installing the vtable, and clearing a byte flag. Vtable directly identifies
                       the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168cdc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013df2c0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = Engine::FRTWNetworkService::vftable;
  *(undefined1 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

