// addr: 0x008a7500
// name: Client_registerCommonDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Client_registerCommonDataSources(void * client) */

void __fastcall Client_registerCommonDataSources(void *client)

{
  void *dataSource;
  void *pvVar1;
  void *owner;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers broad client GUI datasources for player positions, locale/language,
                       job customization, inventory categories, equipment slots, factory tools,
                       target data, and related tables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0157e6d3;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x268);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PlayerPositionsDataSource_ctor(pvVar1,client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x5dc) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x278);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LocaleDataSource_ctor(pvVar1,client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x60c) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x278);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LanguageDataSource_ctor_ctor(pvVar1,client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x610) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x2b0);
  local_4 = 3;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = JobCustomizationDataSource_ctor(pvVar1,client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x61c) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x3c);
  local_4 = 4;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = InventoryCategoriesDataSource_ctor(pvVar1,*(int *)((int)client + 0x1bc));
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x5e0) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x254);
  local_4 = 5;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = EquipmentSlotsDataSource_ctor(pvVar1,owner);
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x5fc) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x2ec);
  local_4 = 6;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)TintGroupDataSource_ctor(client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x628) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x670);
  local_4 = 7;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FactoryToolsDataSource_ctor(pvVar1,client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x63c) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x26c);
  local_4 = 8;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = TargetDataSource_ctor(pvVar1,client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x600) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  ExceptionList = local_c;
  return;
}

