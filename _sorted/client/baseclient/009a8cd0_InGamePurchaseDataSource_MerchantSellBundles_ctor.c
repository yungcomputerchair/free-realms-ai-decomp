// addr: 0x009a8cd0
// name: InGamePurchaseDataSource_MerchantSellBundles_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_MerchantSellBundles_ctor(void * this, void *
   name, void * owner) */

void * __thiscall
InGamePurchaseDataSource_MerchantSellBundles_ctor(void *this,void *name,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::MerchantSellBundles data source by
                       invoking the shared StoreBundles base constructor and installing the
                       MerchantSellBundles vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159e3c6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  InGamePurchaseDataSource_StoreBundles_ctor(this,name);
  local_4 = 0;
  *(undefined ***)this = InGamePurchaseDataSource::MerchantSellBundles::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::MerchantSellBundles::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::MerchantSellBundles::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::MerchantSellBundles::vftable;
  *(undefined ***)((int)this + 0x270) = InGamePurchaseDataSource::MerchantSellBundles::vftable;
  FUN_009a1ad0(uVar1);
  *(undefined1 *)((int)this + 0x12d9) = 1;
  ExceptionList = local_c;
  return this;
}

