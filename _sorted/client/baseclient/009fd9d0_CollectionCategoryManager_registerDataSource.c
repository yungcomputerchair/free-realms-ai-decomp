// addr: 0x009fd9d0
// name: CollectionCategoryManager_registerDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionCategoryManager_registerDataSource(void * client) */

void __thiscall CollectionCategoryManager_registerDataSource(void *this,void *client)

{
  void *dataSource;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Allocates a CollectionCategoryManager_CollectionCategoryDataSource and
                       registers it with GuiDataSourceRegistry. Called during
                       Client_InitAssetsAndDisplay, so this is the collection-category datasource
                       setup step. */
  puStack_8 = &LAB_015aa383;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
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
  local_4 = 0;
  *(void **)((int)this + 0x3c) = client;
  pvVar1 = Mem_Alloc(600);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CollectionCategoryManager_CollectionCategoryDataSource_ctor(pvVar1,this);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(void **)((int)this + 0x38) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  ExceptionList = local_c;
  return;
}

