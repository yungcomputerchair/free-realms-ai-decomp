// addr: 0x00be70b0
// name: ActivityFinderManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActivityFinderManager_registerDataSources(void * this) */

void __thiscall ActivityFinderManager_registerDataSources(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes activity finder GUI data, including ActivityFinderDataSource and
                       the activity category/portal-section datasources built by helper 00cea090. */
  puStack_8 = &LAB_015f0eee;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = BaseDefinitionManager::vftable;
  local_4 = 0;
  *(undefined ***)this = ClientActivityManager::vftable;
  FUN_00be5e60(uVar1);
  local_4._0_1_ = 1;
  FUN_00be5ec0();
  local_4._0_1_ = 2;
  FUN_00be6e10();
  local_4._0_1_ = 3;
  FUN_00be5f20();
  local_4._0_1_ = 4;
  ActivityFinderManager_registerCategoryDataSources((void *)((int)this + 0x16c88));
  local_4._0_1_ = 5;
  FUN_00ae4430();
  local_4._0_1_ = 6;
  FUN_006ffa90();
  *(void **)((int)this + 0x18cbc) = in_stack_00000004;
  *(undefined4 *)((int)this + 0x18cc0) = 0;
  local_4._0_1_ = 8;
  FUN_00be21a0();
  local_4._0_1_ = 9;
  pvVar2 = Mem_Alloc(0x25c);
  local_4._0_1_ = 10;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ActivityFinderDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_00bdf370(pvVar2);
  ExceptionList = local_c;
  return;
}

