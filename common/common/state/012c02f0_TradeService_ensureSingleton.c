// addr: 0x012c02f0
// name: TradeService_ensureSingleton
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeService_ensureSingleton(void) */

void TradeService_ensureSingleton(void)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and constructs the global TradeService singleton via
                       TradeService_ctor. Evidence is the identified TradeService_ctor callee and
                       global storage. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166e25b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  if (DAT_01cbd690 == 0) {
    local_10 = Mem_Alloc(0x10);
    local_4 = 0;
    if (local_10 == (void *)0x0) {
      DAT_01cbd690 = 0;
    }
    else {
      DAT_01cbd690 = TradeService_ctor(uVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

