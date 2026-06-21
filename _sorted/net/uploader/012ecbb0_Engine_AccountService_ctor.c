// addr: 0x012ecbb0
// name: Engine_AccountService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_AccountService_ctor(void * this) */

void * __fastcall Engine_AccountService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::AccountService by invoking its base/service initializer
                       and installing the AccountService vtable. Vtable directly identifies the
                       class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_FRTWAccountService_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = Engine::AccountService::vftable;
  ExceptionList = local_c;
  return this;
}

