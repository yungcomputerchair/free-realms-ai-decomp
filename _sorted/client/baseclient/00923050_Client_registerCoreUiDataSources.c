// addr: 0x00923050
// name: Client_registerCoreUiDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Client_registerCoreUiDataSources(void * client) */

void __fastcall Client_registerCoreUiDataSources(void *client)

{
  int iVar1;
  void *dataSource;
  void *pvVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers core UI datasources including App.UI property/module tables,
                       ClosestInteractionTargetDataSource, and the WelcomeInfo datasource bundle.
                       This is a broad base-client UI datasource initialization helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158eab7;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x48c);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = GuiPropertyDataSource_ctor(pvVar2,"App.UI.SelectedControl.PropertyList");
  }
  local_4 = 0xffffffff;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,piVar3,dataSource);
  LOCK();
  iVar1 = piVar3[1] + -1;
  piVar3[1] = iVar1;
  UNLOCK();
  if (iVar1 == 0) {
    (**(code **)(*piVar3 + 4))();
  }
  pvVar2 = Mem_Alloc(600);
  local_4 = 1;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)GuiDataModules_ctor("App.UI.Modules");
  }
  local_4 = 0xffffffff;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,piVar3,dataSource);
  LOCK();
  iVar1 = piVar3[1] + -1;
  piVar3[1] = iVar1;
  UNLOCK();
  if (iVar1 == 0) {
    (**(code **)(*piVar3 + 4))();
  }
  pvVar2 = Mem_Alloc(600);
  local_4 = 2;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_010cc920("App.UI.EditModuleContents");
  }
  local_4 = 0xffffffff;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,piVar3,dataSource);
  LOCK();
  iVar1 = piVar3[1] + -1;
  piVar3[1] = iVar1;
  UNLOCK();
  if (iVar1 == 0) {
    (**(code **)(*piVar3 + 4))();
  }
  pvVar2 = Mem_Alloc(0x1c);
  local_4 = 3;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else if (client == (void *)0x0) {
    pvVar2 = WelcomeInfoDataSourceManager_ctor(pvVar2,(void *)0x0);
  }
  else {
    pvVar2 = WelcomeInfoDataSourceManager_ctor(pvVar2,(void *)((int)client + 4));
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x638) = pvVar2;
  pvVar2 = Mem_Alloc(0x268);
  local_4 = 4;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ClosestInteractionTargetDataSource_ctor(pvVar2,client);
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x5d8) = pvVar2;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar2,dataSource);
  ExceptionList = local_c;
  return;
}

