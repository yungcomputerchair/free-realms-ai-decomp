// addr: 0x014a5720
// name: TradeCommand_StartPostedTrades_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * TradeCommand_StartPostedTrades_create(void) */

void * TradeCommand_StartPostedTrades_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x10 bytes and constructs TradeCommand_StartPostedTrades. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a4ccb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = TradeCommand_StartPostedTrades_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

