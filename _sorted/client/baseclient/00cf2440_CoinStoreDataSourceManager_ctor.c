// addr: 0x00cf2440
// name: CoinStoreDataSourceManager_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CoinStoreDataSourceManager_ctor(void * this, void * client, void *
   inventoryOwner) */

void * __thiscall CoinStoreDataSourceManager_ctor(void *this,void *client,void *inventoryOwner)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the coin-store datasource bundle: coin-store items/groups, player
                       sell, search results, active filters, transaction history, and merchant
                       sell/buy inventory datasources. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160ff8d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x52f4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CoinStoreDataSource_CoinStoreItems_ctor
                       (pvVar1,PTR_s_BaseClient_CoinStore_CoinStoreIt_01b7d9c8);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)this = 0;
  FUN_00cf0bd0(pvVar1);
  local_4 = 1;
  pvVar1 = Mem_Alloc(0x52f4);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CoinStoreDataSource_CoinStoreItems_ctor
                       (pvVar1,PTR_s_BaseClient_CoinStore_CoinStoreIt_01b7d9cc);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00cf0bd0(pvVar1);
  local_4._0_1_ = 3;
  pvVar1 = Mem_Alloc(0x2e8);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CoinStoreDataSource_PlayerSell_ctor
                       (pvVar1,PTR_s_BaseClient_CoinStore_PlayerSell_01b7d9d0);
  }
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_00cf0c60(pvVar1);
  local_4._0_1_ = 5;
  pvVar1 = Mem_Alloc(0x52f4);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CoinStoreDataSource_SearchResults_ctor
                       (pvVar1,PTR_s_BaseClient_CoinStore_SearchResul_01b7d9d4);
  }
  local_4._0_1_ = 5;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_00cf0cf0(pvVar1);
  local_4._0_1_ = 7;
  pvVar1 = Mem_Alloc(0x36c);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CoinStoreDataSource_ActiveFilters_ctor
                       (pvVar1,PTR_s_BaseClient_CoinStore_ActiveFilte_01b7d9d8);
  }
  local_4._0_1_ = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_00cf0d80(pvVar1);
  local_4._0_1_ = 9;
  pvVar1 = Mem_Alloc(0x264);
  local_4._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CoinStoreDataSource_TransactionHistory_ctor
                       (pvVar1,PTR_s_BaseClient_CoinStore_Transaction_01b7d9dc);
  }
  local_4._0_1_ = 9;
  *(undefined4 *)((int)this + 0x14) = 0;
  FUN_00cf0e10(pvVar1);
  local_4._0_1_ = 0xb;
  pvVar1 = Mem_Alloc(0x338);
  local_4._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = MerchantSellInventoryDataSource_ctor(pvVar1,client);
  }
  local_4._0_1_ = 0xb;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_00cf0ea0(pvVar1);
  local_4._0_1_ = 0xd;
  pvVar1 = Mem_Alloc(0x2ec);
  local_4._0_1_ = 0xe;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = MerchantBuyInventoryDataSource_ctor(pvVar1,client);
  }
  local_4 = CONCAT31(local_4._1_3_,0xd);
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_00cf0f30(pvVar1);
  ExceptionList = local_c;
  return this;
}

