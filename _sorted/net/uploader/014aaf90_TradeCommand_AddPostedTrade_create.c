// addr: 0x014aaf90
// name: TradeCommand_AddPostedTrade_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * TradeCommand_AddPostedTrade_create(void) */

void * TradeCommand_AddPostedTrade_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a TradeCommand_AddPostedTrade command object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5f3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = TradeCommand_AddPostedTrade_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

