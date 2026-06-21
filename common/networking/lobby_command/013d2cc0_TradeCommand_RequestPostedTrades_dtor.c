// addr: 0x013d2cc0
// name: TradeCommand_RequestPostedTrades_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_RequestPostedTrades_dtor(void * this) */

void __fastcall TradeCommand_RequestPostedTrades_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for TradeCommand_RequestPostedTrades; it installs the derived
                       vtable and calls the TradeCommand base destructor. Evidence is
                       TradeCommand_RequestPostedTrades::vftable. */
  puStack_8 = &LAB_0168b338;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_RequestPostedTrades::vftable;
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

