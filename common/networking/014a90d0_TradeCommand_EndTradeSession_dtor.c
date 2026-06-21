// addr: 0x014a90d0
// name: TradeCommand_EndTradeSession_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_EndTradeSession_dtor(void * this) */

void __fastcall TradeCommand_EndTradeSession_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for TradeCommand_EndTradeSession; restores derived
                       vtable and calls TradeCommand_dtor. */
  puStack_8 = &LAB_016a5768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_EndTradeSession::vftable;
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

