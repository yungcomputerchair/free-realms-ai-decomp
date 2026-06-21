// addr: 0x014a96c0
// name: TradeCommand_EndPostedTrades_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * TradeCommand_EndPostedTrades_create(void) */

void * TradeCommand_EndPostedTrades_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0xc bytes and constructs TradeCommand_EndPostedTrades. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a591b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = TradeCommand_EndPostedTrades_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

