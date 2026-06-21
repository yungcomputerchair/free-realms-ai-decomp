// addr: 0x014aa530
// name: TradeCommand_CancelTradeRequest_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_CancelTradeRequest_dtor(void * this) */

void __fastcall TradeCommand_CancelTradeRequest_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for TradeCommand_CancelTradeRequest; restores vtable
                       and calls TradeCommand_dtor. */
  puStack_8 = &LAB_016a5d08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_CancelTradeRequest::vftable;
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

