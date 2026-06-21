// addr: 0x014a6ff0
// name: TradeCommand_RemoveCardFromTrade_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_RemoveCardFromTrade_dtor(void * this) */

void __fastcall TradeCommand_RemoveCardFromTrade_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for TradeCommand_RemoveCardFromTrade; destroys
                       embedded InstanceID and calls TradeCommand_dtor. */
  puStack_8 = &LAB_016a5123;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_RemoveCardFromTrade::vftable;
  local_4 = 0;
  InstanceID_dtor((void *)((int)this + 0xc));
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

