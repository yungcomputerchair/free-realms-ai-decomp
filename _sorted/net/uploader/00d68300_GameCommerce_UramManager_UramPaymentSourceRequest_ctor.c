// addr: 0x00d68300
// name: GameCommerce_UramManager_UramPaymentSourceRequest_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommerce_UramManager_UramPaymentSourceRequest_ctor(void * this) */

void * __fastcall GameCommerce_UramManager_UramPaymentSourceRequest_ctor(void *this)

{
  undefined1 *puStack00000008;
  undefined1 local_20 [4];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UramPaymentSourceRequest with request type 1, installs the
                       request vtable, and initializes its payload member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016187b8;
  local_c = ExceptionList;
  uStack_18 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  puStack00000008 = local_20;
  FUN_00d68220(1);
  local_4 = 0;
  *(undefined ***)this = GameCommerce::UramManager::UramPaymentSourceRequest::vftable;
  uStack_1c = 0xd68359;
  FUN_00f7c6d0();
  ExceptionList = local_c;
  return this;
}

