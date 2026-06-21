// addr: 0x009e42a0
// name: FactoryInfoManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FactoryInfoManager_registerDataSources(void * this) */

void __thiscall FactoryInfoManager_registerDataSources(void *this)

{
  void *dataSource;
  void *pvVar1;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates and registers factory UI datasources, including FactoryNpcTooltipInfo
                       and FactoryInfoDataSource, with the GUI datasource registry. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a6bef;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  *(undefined ***)this = FactoryProcessor::vftable;
  FUN_01058860();
  local_4 = 0;
  *(undefined4 *)((int)this + 0x2280) = 0;
  *(undefined4 *)((int)this + 0x2284) = 0;
  *(undefined4 *)((int)this + 0x2288) = 0;
  *(undefined4 *)((int)this + 0x228c) = 0;
  *(undefined4 *)((int)this + 0x2290) = 0;
  *(undefined4 *)((int)this + 0x2298) = 0;
  *(undefined4 *)((int)this + 0x229c) = 0;
  FactoryNpcTooltipInfo_ctor((void *)((int)this + 0x22c0));
  local_4._0_1_ = 1;
  *(void **)((int)this + 0x2270) = in_stack_00000004;
  *(undefined4 *)((int)this + 0x22b8) = DAT_01be6010;
  *(undefined4 *)((int)this + 0x22bc) = DAT_01be6014;
  *(undefined4 *)((int)this + 0x22b0) = DAT_01be6010;
  *(undefined4 *)((int)this + 0x22b4) = DAT_01be6014;
  *(undefined1 *)((int)this + 0x23a0) = 0;
  *(undefined1 *)((int)this + 0x23a1) = 0;
  pvVar1 = Mem_Alloc(0x350);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_00c652d0(in_stack_00000004);
  }
  local_4._0_1_ = 1;
  *(void **)((int)this + 0x23a4) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  pvVar1 = Mem_Alloc(0x264);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FactoryInfoDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(void **)((int)this + 0x23a8) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  *(undefined4 *)((int)this + 0x2278) = 0;
  *(undefined4 *)((int)this + 0x2298) = 0;
  *(undefined4 *)((int)this + 0x229c) = 0;
  *(undefined4 *)((int)this + 0x227c) = 0;
  ExceptionList = local_c;
  return;
}

