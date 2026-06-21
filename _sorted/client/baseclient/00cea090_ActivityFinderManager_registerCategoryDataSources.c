// addr: 0x00cea090
// name: ActivityFinderManager_registerCategoryDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActivityFinderManager_registerCategoryDataSources(void * this) */

void __fastcall ActivityFinderManager_registerCategoryDataSources(void *this)

{
  void *pvVar1;
  void *owner;
  void *owner_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates ClientActivityCategoryDatasource and
                       ClientActivityPortalSectionDatasource and stores them through activity finder
                       manager helpers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160f368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00ce9ce0(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 1;
  FUN_00ce9d60();
  *(undefined4 *)((int)this + 0x428) = 0;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *(undefined4 *)((int)this + 0x42c) = 0;
  local_4._0_1_ = 5;
  pvVar1 = Mem_Alloc(0x47c);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientActivityCategoryDatasource_ctor(pvVar1,owner);
  }
  local_4._0_1_ = 5;
  FUN_00ce8db0(pvVar1);
  pvVar1 = Mem_Alloc(0x368);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientActivityPortalSectionDatasource_ctor(pvVar1,owner_00);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00ce8e20(pvVar1);
  ExceptionList = local_c;
  return;
}

