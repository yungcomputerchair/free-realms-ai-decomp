// addr: 0x0143a0e0
// name: ECommCommand_RedeemItemGrant_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * ECommCommand_RedeemItemGrant_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs an ECommCommand_RedeemItemGrant. Constructor callee
                       identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169785b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x24);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ECommCommand_RedeemItemGrant_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

