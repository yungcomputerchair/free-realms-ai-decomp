// addr: 0x00a29500
// name: LobbyDataSourceManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyDataSourceManager_registerDataSources(void * this) */

void __thiscall LobbyDataSourceManager_registerDataSources(void *this)

{
  void *dataSource;
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000004;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates and registers lobby encounter-list and game-list datasources with the
                       GUI datasource registry during client asset/display initialization. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b082a;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  FUN_00a23f40();
  local_4 = 0;
  *(undefined4 *)((int)this + 0x44) = in_stack_00000004;
  FUN_00a249f0();
  local_4._0_1_ = 1;
  FUN_00a29440();
  local_4._0_1_ = 2;
  pvVar1 = Mem_Alloc(0x26c);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyDataSourceManager_GameListDataSource_ctor(pvVar1,this);
  }
  local_4._0_1_ = 2;
  *(void **)this = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x26c);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyDataSourceManager_EncounterListDataSource_ctor(pvVar1,this);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  *(void **)((int)this + 4) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  FUN_00c91670();
  puVar2 = (undefined4 *)FUN_00702670(local_14);
  *(undefined4 *)((int)this + 0x48) = *puVar2;
  *(undefined4 *)((int)this + 0x4c) = puVar2[1];
  *(undefined4 *)((int)this + 0xec) = 1;
  ExceptionList = local_c;
  return;
}

