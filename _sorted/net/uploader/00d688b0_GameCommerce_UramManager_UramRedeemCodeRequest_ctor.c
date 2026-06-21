// addr: 0x00d688b0
// name: GameCommerce_UramManager_UramRedeemCodeRequest_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommerce_UramManager_UramRedeemCodeRequest_ctor(void * this) */

void * __fastcall GameCommerce_UramManager_UramRedeemCodeRequest_ctor(void *this)

{
  undefined1 *puStack00000008;
  undefined1 local_20 [4];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UramRedeemCodeRequest with request type 9, installs the request
                       vtable, and initializes its payload member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01618a58;
  local_c = ExceptionList;
  uStack_18 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  puStack00000008 = local_20;
  FUN_00d68220(9);
  local_4 = 0;
  *(undefined ***)this = GameCommerce::UramManager::UramRedeemCodeRequest::vftable;
  uStack_1c = 0xd68909;
  FUN_00f7f000();
  ExceptionList = local_c;
  return this;
}

