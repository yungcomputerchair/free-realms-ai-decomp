// addr: 0x009a8f60
// name: InGamePurchaseDataSourceManager_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSourceManager_ctor(void * this, void * client) */

void * __thiscall InGamePurchaseDataSourceManager_ctor(void *this,void *client)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int extraout_EAX;
  int extraout_EAX_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the in-game purchase datasource bundle, creating the root/store
                       item, categories/groups, item of the day, bundle of the day, portal/billboard
                       data, group/VIP contents, filters/sorts, gift order data,
                       payment/country/state code data, price lists, merchant sell bundles, and
                       selected store bundle datasources. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159e65a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar4 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = StoreBundleRoot_ctor(PTR_s_BaseClient_InGamePurchase_StoreI_01b45a10);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)this = 0;
  FUN_00998cb0(uVar5);
  local_4 = 1;
  pvVar4 = Mem_Alloc(0x12dc);
  local_4._0_1_ = 2;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreBundles_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreI_01b45a14);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00998d40(pvVar4);
  local_4._0_1_ = 3;
  pvVar4 = Mem_Alloc(0x3458);
  local_4._0_1_ = 4;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreBundleCategories_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreI_01b45a18,client);
  }
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_00998dd0(pvVar4);
  local_4._0_1_ = 5;
  pvVar4 = Mem_Alloc(0x260);
  local_4._0_1_ = 6;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreBundleGroups_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreI_01b45a1c,client);
  }
  local_4._0_1_ = 5;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_00998e60(pvVar4);
  local_4._0_1_ = 7;
  pvVar4 = Mem_Alloc(0x1318);
  local_4._0_1_ = 8;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreItemOfTheDay_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreI_01b45a20,client);
  }
  local_4._0_1_ = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_00998ef0(pvVar4);
  local_4._0_1_ = 9;
  pvVar4 = Mem_Alloc(0x1318);
  local_4._0_1_ = 10;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreBundleOfTheDay_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreB_01b45a24,client);
  }
  local_4._0_1_ = 9;
  *(undefined4 *)((int)this + 0x14) = 0;
  FUN_00998f80(pvVar4);
  local_4._0_1_ = 0xb;
  pvVar4 = Mem_Alloc(0x25c);
  local_4._0_1_ = 0xc;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StorePortalCategories_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreP_01b45a28,client);
  }
  local_4._0_1_ = 0xb;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_00999010(pvVar4);
  local_4._0_1_ = 0xd;
  pvVar4 = Mem_Alloc(0x260);
  local_4._0_1_ = 0xe;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreBillboardPanels_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreB_01b45a30,client);
  }
  local_4._0_1_ = 0xd;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_009990a0(pvVar4);
  local_4._0_1_ = 0xf;
  pvVar4 = Mem_Alloc(0x25c);
  local_4._0_1_ = 0x10;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreBillboards_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreB_01b45a2c,client);
  }
  local_4._0_1_ = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  FUN_00999130(pvVar4);
  local_4._0_1_ = 0x11;
  pvVar4 = Mem_Alloc(0x12e0);
  local_4._0_1_ = 0x12;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreBundleGroupContents_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreI_01b45a34,client);
  }
  local_4._0_1_ = 0x11;
  *(undefined4 *)((int)this + 0x24) = 0;
  FUN_009991c0(pvVar4);
  local_4._0_1_ = 0x13;
  pvVar4 = Mem_Alloc(0x12e0);
  local_4._0_1_ = 0x14;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreBundleVipLevelContents_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreI_01b45a38,client);
  }
  local_4._0_1_ = 0x13;
  *(undefined4 *)((int)this + 0x28) = 0;
  FUN_00999250(pvVar4);
  local_4._0_1_ = 0x15;
  pvVar4 = Mem_Alloc(0x374);
  local_4._0_1_ = 0x16;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreBundleActiveFilters_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreI_01b45a48,client);
  }
  local_4._0_1_ = 0x15;
  *(undefined4 *)((int)this + 0x2c) = 0;
  FUN_009992e0(pvVar4);
  local_4._0_1_ = 0x17;
  pvVar4 = Mem_Alloc(0x370);
  local_4._0_1_ = 0x18;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StoreBundleActiveSort_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StoreI_01b45a4c,client);
  }
  local_4._0_1_ = 0x17;
  *(undefined4 *)((int)this + 0x30) = 0;
  FUN_00999370(pvVar4);
  local_4._0_1_ = 0x19;
  pvVar4 = Mem_Alloc(0x260);
  local_4._0_1_ = 0x1a;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_GiftOrderHistory_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_GiftOr_01b45a50,client);
  }
  local_4._0_1_ = 0x19;
  *(undefined4 *)((int)this + 0x34) = 0;
  FUN_00999400(pvVar4);
  local_4._0_1_ = 0x1b;
  pvVar4 = Mem_Alloc(0x264);
  local_4._0_1_ = 0x1c;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_GiftOrderEntries_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_GiftOr_01b45a54,client);
  }
  local_4._0_1_ = 0x1b;
  *(undefined4 *)((int)this + 0x38) = 0;
  FUN_00999490(pvVar4);
  local_4._0_1_ = 0x1d;
  pvVar4 = Mem_Alloc(0x260);
  local_4._0_1_ = 0x1e;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_CreditCardPayment_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_Credit_01b45a58,client);
  }
  local_4._0_1_ = 0x1d;
  *(undefined4 *)((int)this + 0x3c) = 0;
  FUN_00999520(pvVar4);
  local_4._0_1_ = 0x1f;
  pvVar4 = Mem_Alloc(0x260);
  local_4._0_1_ = 0x20;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StationCashPriceList_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_Statio_01b45a5c,client);
  }
  local_4._0_1_ = 0x1f;
  *(undefined4 *)((int)this + 0x40) = 0;
  FUN_009995b0(pvVar4);
  local_4._0_1_ = 0x21;
  pvVar4 = Mem_Alloc(0x260);
  local_4._0_1_ = 0x22;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_SubscriptionPriceList_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_Member_01b45a60,client);
  }
  local_4._0_1_ = 0x21;
  *(undefined4 *)((int)this + 0x44) = 0;
  FUN_00999640(pvVar4);
  local_4._0_1_ = 0x23;
  pvVar4 = Mem_Alloc(0x260);
  local_4._0_1_ = 0x24;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_AcceptedCreditCardTypes_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_Accept_01b45a64,client);
  }
  local_4._0_1_ = 0x23;
  *(undefined4 *)((int)this + 0x48) = 0;
  FUN_009996d0(pvVar4);
  local_4._0_1_ = 0x25;
  pvVar4 = Mem_Alloc(0x260);
  local_4._0_1_ = 0x26;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_CountryCodes_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_Countr_01b45a68,client);
  }
  local_4._0_1_ = 0x25;
  *(undefined4 *)((int)this + 0x4c) = 0;
  FUN_00999760(pvVar4);
  local_4._0_1_ = 0x27;
  pvVar4 = Mem_Alloc(0x260);
  local_4._0_1_ = 0x28;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_StateCodes_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_StateC_01b45a6c,client);
  }
  local_4._0_1_ = 0x27;
  *(undefined4 *)((int)this + 0x50) = 0;
  FUN_009997f0(pvVar4);
  local_4._0_1_ = 0x29;
  pvVar4 = Mem_Alloc(0x22f0);
  local_4._0_1_ = 0x2a;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = InGamePurchaseDataSource_MerchantSellBundles_ctor
                       (pvVar4,PTR_s_BaseClient_InGamePurchase_Mercha_01b45a70,client);
  }
  local_4._0_1_ = 0x29;
  piVar1 = (int *)((int)this + 0x54);
  *piVar1 = 0;
  FUN_00999880(pvVar4);
  local_4._0_1_ = 0x2b;
  FUN_0099f4e0();
  *(undefined ***)((int)this + 0x8c) =
       SoeUtil::List<DataSourceRef<InGamePurchaseDataSource::StoreBundles>,-1>::vftable;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  local_4 = CONCAT31(local_4._1_3_,0x2d);
  uVar5 = *(undefined4 *)((int)this + 4);
  *(void **)((int)this + 0x9c) = client;
  iVar6 = *(int *)((int)this + 0x60) + 1;
  if (*(int *)((int)this + 100) < iVar6) {
    FUN_00999da0(iVar6,0);
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x5c) + *(int *)((int)this + 0x60) * 4);
  *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar5;
  }
  uVar5 = *(undefined4 *)((int)this + 0x10);
  iVar6 = *(int *)((int)this + 0x60) + 1;
  if (*(int *)((int)this + 100) < iVar6) {
    FUN_00999da0(iVar6,0);
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x5c) + *(int *)((int)this + 0x60) * 4);
  *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar5;
  }
  uVar5 = *(undefined4 *)((int)this + 0x14);
  iVar6 = *(int *)((int)this + 0x60) + 1;
  if (*(int *)((int)this + 100) < iVar6) {
    FUN_00999da0(iVar6,0);
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x5c) + *(int *)((int)this + 0x60) * 4);
  *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar5;
  }
  uVar5 = *(undefined4 *)((int)this + 0x24);
  iVar6 = *(int *)((int)this + 0x60) + 1;
  if (*(int *)((int)this + 100) < iVar6) {
    FUN_00999da0(iVar6,0);
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x5c) + *(int *)((int)this + 0x60) * 4);
  *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar5;
  }
  uVar5 = *(undefined4 *)((int)this + 0x28);
  iVar6 = *(int *)((int)this + 0x60) + 1;
  if (*(int *)((int)this + 100) < iVar6) {
    FUN_00999da0(iVar6,0);
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x5c) + *(int *)((int)this + 0x60) * 4);
  *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar5;
  }
  iVar6 = *piVar1;
  iVar7 = *(int *)((int)this + 0x60) + 1;
  if (*(int *)((int)this + 100) < iVar7) {
    FUN_00999da0(iVar7,0);
  }
  piVar3 = (int *)(*(int *)((int)this + 0x5c) + *(int *)((int)this + 0x60) * 4);
  *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar6;
  }
  InGamePurchaseManager_registerStoreBundlesDataSource(this);
  InGamePurchaseManager_registerStoreBundlesDataSource(this);
  InGamePurchaseManager_registerStoreBundlesDataSource(this);
  *(undefined1 *)(extraout_EAX + 0x12d8) = 0;
  InGamePurchaseManager_registerStoreBundlesDataSource(this);
  *(undefined1 *)(extraout_EAX_00 + 0x1299) = 0;
  *(undefined1 *)(*piVar1 + 0x1299) = 0;
  ExceptionList = local_c;
  return this;
}

