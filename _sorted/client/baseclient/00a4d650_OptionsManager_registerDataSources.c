// addr: 0x00a4d650
// name: OptionsManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void OptionsManager_registerDataSources(void * client) */

void __thiscall OptionsManager_registerDataSources(void *this,void *client)

{
  void *dataSource;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers option-related GUI datasources for BaseClient.Options,
                       BaseClient.ControllerOptions, and BaseClient.HelpCredits. Each datasource is
                       constructed via OptionsDataSource_ctor and registered with the GUI datasource
                       registry. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b5541;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(void **)((int)this + 0x30) = client;
  *(undefined1 *)((int)this + 0x34) = 0;
  pvVar1 = Mem_Alloc(0x25c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = OptionsDataSource_ctor(pvVar1,client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0xc) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x25c);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = OptionsDataSource_ctor(pvVar1,client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0x1c) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x25c);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = OptionsDataSource_ctor(pvVar1,client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0x2c) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  ExceptionList = local_c;
  return;
}

