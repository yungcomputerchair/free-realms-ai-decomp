// addr: 0x00d69550
// name: GameCommerce_UramManager_createUramDeleteCreditCardRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GameCommerce_UramManager_createUramDeleteCreditCardRequest(void) */

void * GameCommerce_UramManager_createUramDeleteCreditCardRequest(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs
                       GameCommerce::UramManager::UramDeleteCreditCardRequest, returning null on
                       allocation failure. Evidence is callee 00d684a0, whose constructor installs
                       GameCommerce::UramManager::UramDeleteCreditCardRequest::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01618c9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xb0);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = GameCommerce_UramManager_UramDeleteCreditCardRequest_ctor(pvVar1);
    ExceptionList = local_c;
    return pvVar1;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

