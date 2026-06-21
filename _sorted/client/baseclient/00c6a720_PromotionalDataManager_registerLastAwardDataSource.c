// addr: 0x00c6a720
// name: PromotionalDataManager_registerLastAwardDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PromotionalDataManager_registerLastAwardDataSource(void * this) */

void __fastcall PromotionalDataManager_registerLastAwardDataSource(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates PromotionalDataSource_LastPromotionalAward for
                       BaseClient.Marketing.LastPromotionalAward and stores it through the
                       promotional data manager helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016000f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x25c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PromotionalDataSource_LastPromotionalAward_ctor
                       (pvVar1,"BaseClient.Marketing.LastPromotionalAward");
  }
  local_4 = 0xffffffff;
  *(undefined4 *)this = 0;
  FUN_00c69d70(pvVar1);
  ExceptionList = local_c;
  return;
}

