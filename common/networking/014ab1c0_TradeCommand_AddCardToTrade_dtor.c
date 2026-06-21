// addr: 0x014ab1c0
// name: TradeCommand_AddCardToTrade_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AddCardToTrade_dtor(void * this) */

void __fastcall TradeCommand_AddCardToTrade_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for TradeCommand_AddCardToTrade; destroys embedded
                       InstanceID and calls TradeCommand_dtor. */
  puStack_8 = &LAB_016a5fb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_AddCardToTrade::vftable;
  local_4 = 0;
  InstanceID_dtor((void *)((int)this + 0xc));
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

