// addr: 0x00a3d6e0
// name: ClientItemDefinitionManager_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientItemDefinitionManager_ctor(void * this, void * client) */

void * __thiscall ClientItemDefinitionManager_ctor(void *this,void *client)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ClientItemDefinitionManager, initializes large item-definition
                       storage, gets the item definition datasource dispatcher, and creates
                       single/all item definitions plus BaseClient.ItemGroups datasources. */
  puStack_8 = &LAB_015b3376;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  *(undefined ***)this = ClientItemDefinitionManager::vftable;
  *(void **)((int)this + 4) = client;
  *(undefined4 *)((int)this + 8) = 0;
  local_4 = 0;
  dataRecord_initWithVtable((void *)((int)this + 0xc),client,pvVar1);
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  _memset((void *)((int)this + 100),0,0x1000);
  *(undefined4 *)((int)this + 0x54) = 0;
  local_4._0_1_ = 2;
  FUN_00a3c400();
  local_4._0_1_ = 3;
  FUN_00a3d640();
  *(undefined4 *)((int)this + 0x24bc) = 0;
  *(undefined4 *)((int)this + 0x24c0) = 0;
  *(undefined4 *)((int)this + 0x24c4) = 0;
  *(undefined4 *)((int)this + 0x24c8) = 0;
  local_4._0_1_ = 8;
  ItemDefinitionDsUpdateDispatcher_getInstance();
  pvVar1 = Mem_Alloc(0x52f4);
  local_4._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = SingleItemDefinitionDataSource_ctor(pvVar1,client);
  }
  local_4._0_1_ = 8;
  FUN_00a3aba0(pvVar1);
  pvVar1 = Mem_Alloc(0x52f4);
  local_4._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = AllItemDefinitionsDataSource_ctor(pvVar1,client);
  }
  local_4._0_1_ = 8;
  FUN_00a3adc0(pvVar1);
  pvVar1 = Mem_Alloc(0x264);
  local_4._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ItemGroupsDataSource_ctor(pvVar1,client);
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00a3ace0(pvVar1);
  ExceptionList = local_c;
  return this;
}

