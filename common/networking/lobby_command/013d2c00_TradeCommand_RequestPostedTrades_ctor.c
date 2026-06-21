// addr: 0x013d2c00
// name: TradeCommand_RequestPostedTrades_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_RequestPostedTrades_ctor(void * this) */

void * __fastcall TradeCommand_RequestPostedTrades_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs TradeCommand_RequestPostedTrades by performing base setup and
                       installing TradeCommand_RequestPostedTrades::vftable. Evidence is the vtable
                       assignment and request-posted-trades send/create callers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = TradeCommand_RequestPostedTrades::vftable;
  ExceptionList = local_c;
  return this;
}

