// addr: 0x00d69850
// name: GameCommerce_UramManager_createUramRedeemCodeRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GameCommerce_UramManager_createUramRedeemCodeRequest(void) */

void * GameCommerce_UramManager_createUramRedeemCodeRequest(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs GameCommerce::UramManager::UramRedeemCodeRequest,
                       returning null on allocation failure. Evidence is callee 00d688b0, whose
                       constructor installs
                       GameCommerce::UramManager::UramRedeemCodeRequest::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01618dbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(200);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = GameCommerce_UramManager_UramRedeemCodeRequest_ctor(pvVar1);
    ExceptionList = local_c;
    return pvVar1;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

