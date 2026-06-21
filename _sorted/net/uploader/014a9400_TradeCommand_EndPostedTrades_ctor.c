// addr: 0x014a9400
// name: TradeCommand_EndPostedTrades_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_EndPostedTrades_ctor(void * this) */

void * __fastcall TradeCommand_EndPostedTrades_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EndPostedTrades command via the common trade-command base and
                       installs its vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = TradeCommand_EndPostedTrades::vftable;
  ExceptionList = local_c;
  return this;
}

