// addr: 0x014a7a40
// name: TradeCommand_PostedTradeError_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_PostedTradeError_dtor(void * this) */

void __fastcall TradeCommand_PostedTradeError_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for TradeCommand_PostedTradeError; restores vtable
                       and calls TradeCommand_dtor. */
  puStack_8 = &LAB_016a5298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_PostedTradeError::vftable;
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

