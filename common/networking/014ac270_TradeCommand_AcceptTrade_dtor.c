// addr: 0x014ac270
// name: TradeCommand_AcceptTrade_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AcceptTrade_dtor(void * this) */

void __fastcall TradeCommand_AcceptTrade_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for TradeCommand_AcceptTrade; restores vtable and
                       calls TradeCommand_dtor. */
  puStack_8 = &LAB_016a6278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_AcceptTrade::vftable;
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

