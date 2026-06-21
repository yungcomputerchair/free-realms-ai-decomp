// addr: 0x009fc6a0
// name: UiBugManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UiBugManager_registerDataSources(void * this) */

void __thiscall UiBugManager_registerDataSources(void *this)

{
  void *dataSource;
  void *pvVar1;
  undefined4 in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Registers UI bug-report datasources for bug category, subcategory, and
                       severity with the GUI datasource registry. */
  puStack_8 = &LAB_015aa0cf;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  uStack_3 = 0;
  local_4 = 2;
  *(undefined4 *)((int)this + 0xb8) = in_stack_00000004;
  *(undefined4 *)((int)this + 0xb4) = 1;
  pvVar1 = Mem_Alloc(600);
  local_4 = 3;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = UiBugManager_BugCategoryDataSource_ctor(pvVar1,this);
  }
  local_4 = 2;
  *(void **)((int)this + 0xa8) = pvVar1;
  pvVar1 = Mem_Alloc(600);
  local_4 = 4;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = UiBugManager_BugSubCategoryDataSource_ctor(pvVar1,this);
  }
  local_4 = 2;
  *(void **)((int)this + 0xac) = pvVar1;
  pvVar1 = Mem_Alloc(600);
  local_4 = 5;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = UiBugManager_BugSeverityDataSource_ctor(pvVar1,this);
  }
  _local_4 = CONCAT31(uStack_3,2);
  *(void **)((int)this + 0xb0) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,*(void **)((int)this + 0xa8),dataSource);
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,*(void **)((int)this + 0xac),dataSource);
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,*(void **)((int)this + 0xb0),dataSource);
  ExceptionList = local_c;
  return;
}

