// addr: 0x00d6b800
// name: GameCommerce_UramManager_createUramAddCreditCardRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GameCommerce_UramManager_createUramAddCreditCardRequest(void) */

void * GameCommerce_UramManager_createUramAddCreditCardRequest(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs GameCommerce::UramManager::UramAddCreditCardRequest,
                       returning null on allocation failure. Evidence is callee 00d6b540, whose
                       constructor installs
                       GameCommerce::UramManager::UramAddCreditCardRequest::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0161910b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x1d8);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = (void *)FUN_00d6b540();
    ExceptionList = local_c;
    return pvVar1;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

