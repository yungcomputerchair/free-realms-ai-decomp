// addr: 0x00ad0fa0
// name: WelcomeInfoDataSourceManager_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WelcomeInfoDataSourceManager_ctor(void * this, void * client) */

void * __thiscall WelcomeInfoDataSourceManager_ctor(void *this,void *client)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the welcome-info datasource bundle, including what's-new, info,
                       claim-code, and latest-content datasources. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c8aa5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x268);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = WelcomeInfo_WhatsNewDataSource_ctor(pvVar1,client);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)this = 0;
  FUN_00ace710(pvVar1);
  local_4 = 1;
  pvVar1 = Mem_Alloc(0x26c);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = WelcomeInfo_InfoDataSource_ctor(pvVar1,client);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00ace770(pvVar1);
  local_4._0_1_ = 3;
  pvVar1 = Mem_Alloc(0x268);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = WelcomeInfo_ClaimCodeDataSource_ctor(pvVar1,client);
  }
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_00ace7d0(pvVar1);
  local_4._0_1_ = 5;
  pvVar1 = Mem_Alloc(0x268);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = WelcomeInfo_LatestContentDataSource_ctor(pvVar1,client);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_00ace830(pvVar1);
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return this;
}

