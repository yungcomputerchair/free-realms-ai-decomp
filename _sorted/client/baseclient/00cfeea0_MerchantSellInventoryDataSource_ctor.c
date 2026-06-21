// addr: 0x00cfeea0
// name: MerchantSellInventoryDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MerchantSellInventoryDataSource_ctor(void * this, void * owner) */

void * __thiscall MerchantSellInventoryDataSource_ctor(void *this,void *owner)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.MerchantSellInventoryData inventory data source,
                       initializes sell-filter ranges and merchant list arrays, and installs a
                       callback. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01611404;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseInventoryDataSource_ctor
            (this,owner,in_stack_00000008,PTR_s_BaseClient_MerchantSellInventory_01b7f454);
  *(undefined ***)this = MerchantSellInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = MerchantSellInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = MerchantSellInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = MerchantSellInventoryDataSource::vftable;
  uVar2 = DAT_01bf2454;
  uVar1 = DAT_01bf2450;
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = uVar1;
  *(undefined4 *)((int)this + 0x2fc) = uVar2;
  *(undefined4 *)((int)this + 0x300) = uVar1;
  *(undefined4 *)((int)this + 0x304) = uVar2;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined ***)((int)this + 0x310) = SoeUtil::Array<MerchantListEntry_const*,0,1>::vftable;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined ***)((int)this + 800) = SoeUtil::Array<MerchantListEntry*,0,1>::vftable;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(code **)((int)this + 0x330) = FUN_00cfea60;
  ExceptionList = local_c;
  return this;
}

