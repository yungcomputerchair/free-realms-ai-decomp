// addr: 0x00d695d0
// name: GameCommerce_UramManager_createUramGetCreditCardsRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GameCommerce_UramManager_createUramGetCreditCardsRequest(void) */

void * GameCommerce_UramManager_createUramGetCreditCardsRequest(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs
                       GameCommerce::UramManager::UramGetCreditCardsRequest, returning null on
                       allocation failure. Evidence is callee 00d68a50, whose constructor installs
                       GameCommerce::UramManager::UramGetCreditCardsRequest::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01618ccb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x90);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = GameCommerce_UramManager_UramGetCreditCardsRequest_ctor(pvVar1);
    ExceptionList = local_c;
    return pvVar1;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

