// addr: 0x00c69af0
// name: ClaimSystemManager_registerClaimDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClaimSystemManager_registerClaimDataSources(void * this) */

void __fastcall ClaimSystemManager_registerClaimDataSources(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates the BaseClient.ClaimSystem.AvailableItems and
                       BaseClient.ClaimSystem.ClaimItemContents datasources and stores them through
                       claim-system helper methods. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fff49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x260);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClaimDataSource_AvailableItems_ctor(pvVar1,"BaseClient.ClaimSystem.AvailableItems");
  }
  local_4 = 0xffffffff;
  *(undefined4 *)this = 0;
  FUN_00c69240(pvVar1);
  local_4 = 1;
  pvVar1 = Mem_Alloc(0x3c8);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClaimDataSource_ClaimItemContents_ctor
                       (pvVar1,"BaseClient.ClaimSystem.ClaimItemContents");
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00c692d0(pvVar1);
  ExceptionList = local_c;
  return;
}

