// addr: 0x014aa0e0
// name: TradeCommand_ChangeTradeSession_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_ChangeTradeSession_dtor(void * this) */

void __fastcall TradeCommand_ChangeTradeSession_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for TradeCommand_ChangeTradeSession; restores vtable
                       and calls TradeCommand_dtor. */
  puStack_8 = &LAB_016a5be8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_ChangeTradeSession::vftable;
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

