// addr: 0x013d0aa0
// name: TradeCommand_AcceptPostedTrade_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AcceptPostedTrade_dtor(void * this) */

void __fastcall TradeCommand_AcceptPostedTrade_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for TradeCommand_AcceptPostedTrade; it installs the derived vtable
                       and calls the TradeCommand base destructor. Evidence is
                       TradeCommand_AcceptPostedTrade::vftable. */
  puStack_8 = &LAB_0168ae78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_AcceptPostedTrade::vftable;
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

