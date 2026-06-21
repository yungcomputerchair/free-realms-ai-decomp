// addr: 0x014a9000
// name: TradeCommand_EndTradeSession_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_EndTradeSession_ctor(void * this) */

void * __fastcall TradeCommand_EndTradeSession_ctor(void *this)

{
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Constructs TradeCommand_EndTradeSession by installing its vtable after
                       TradeCommand base setup. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5740;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  *(undefined ***)this = TradeCommand_EndTradeSession::vftable;
  FUN_01442520();
  local_4 = local_4 & 0xffffff00;
  TradeCommand_dtor(local_18);
  ExceptionList = local_c;
  return this;
}

