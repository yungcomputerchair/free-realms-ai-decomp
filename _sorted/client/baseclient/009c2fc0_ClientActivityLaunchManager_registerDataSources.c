// addr: 0x009c2fc0
// name: ClientActivityLaunchManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientActivityLaunchManager_registerDataSources(void * this) */

void __thiscall ClientActivityLaunchManager_registerDataSources(void *this)

{
  void *dataSource;
  void *pvVar1;
  undefined4 in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers ActivityLaunchRequests and ActivityLaunchMembers datasources with
                       the GUI registry. It constructs both ClientActivityLaunchRequestDatasource
                       and ClientActivityLaunchMembersDatasource. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a274c;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  FUN_009c2db0();
  *(undefined ***)((int)this + 0x94) = SoeUtil::List<ClientActivityLaunchRequest,-1>::vftable;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0xa4) = in_stack_00000004;
  pvVar1 = Mem_Alloc(0x36c);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientActivityLaunchRequestDatasource_ctor
                       (pvVar1,PTR_s_ActivityLaunchRequests_01b70a94);
  }
  local_4._0_1_ = 1;
  *(void **)((int)this + 0xa8) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x370);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientActivityLaunchMembersDatasource_ctor(pvVar1,PTR_s_ActivityLaunchMembers_01b70a98)
    ;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(void **)((int)this + 0xac) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  ExceptionList = local_c;
  return;
}

