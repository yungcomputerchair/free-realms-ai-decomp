// addr: 0x009a8880
// name: InGamePurchaseDataSource_StoreBundles_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_StoreBundles_ctor(void * this, void * owner)
    */

void * __thiscall InGamePurchaseDataSource_StoreBundles_ctor(void *this,void *owner)

{
  uint uVar1;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the shared StoreBundles in-game purchase data source root,
                       initializes InternalDsBase, filter hash list, store item root data, and flags
                       controlling bundle contents. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159e2b0;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  local_4 = 0;
  FUN_0081b470(uVar1);
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *(undefined ***)((int)this + 0x270) = InGamePurchaseDataSource::InternalDsBase::vftable;
  *(undefined4 *)((int)this + 0x274) = in_stack_00000008;
  local_4._0_1_ = 2;
  *(undefined ***)this = InGamePurchaseDataSource::StoreBundles::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::StoreBundles::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::StoreBundles::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::StoreBundles::vftable;
  *(undefined ***)((int)this + 0x270) = InGamePurchaseDataSource::StoreBundles::vftable;
  *(undefined4 *)((int)this + 0x278) = DAT_01b45a88;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  FUN_009a1a50();
  local_4._0_1_ = 3;
  *(undefined1 *)((int)this + 0x1298) = 0;
  *(undefined1 *)((int)this + 0x1299) = 1;
  *(undefined1 *)((int)this + 0x129a) = in_stack_0000000c;
  *(undefined1 *)((int)this + 0x129b) = 0;
  *(undefined1 *)((int)this + 0x129c) = 0;
  *(undefined1 *)((int)this + 0x129d) = 0;
  FUN_009a87e0();
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)this + 0x12d4) = 1;
  *(undefined1 *)((int)this + 0x12d8) = 1;
  *(undefined1 *)((int)this + 0x12d9) = 0;
  FUN_008356b0(PTR_s_BaseClient_InGamePurchase_StoreI_01b45a10);
  ExceptionList = local_c;
  return this;
}

