// addr: 0x00d69650
// name: GameCommerce_UramManager_createUramPreviewWalletFundRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GameCommerce_UramManager_createUramPreviewWalletFundRequest(void) */

void * GameCommerce_UramManager_createUramPreviewWalletFundRequest(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs
                       GameCommerce::UramManager::UramPreviewWalletFundRequest, returning null on
                       allocation failure. Evidence is callee 00d68570, whose constructor installs
                       GameCommerce::UramManager::UramPreviewWalletFundRequest::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01618cfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xd0);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = GameCommerce_UramManager_UramPreviewWalletFundRequest_ctor(pvVar1);
    ExceptionList = local_c;
    return pvVar1;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

