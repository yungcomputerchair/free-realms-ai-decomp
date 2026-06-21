// addr: 0x012bded0
// name: TradeCommand_CancelPostedTrade_send
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_CancelPostedTrade_send(int postedTradeId) */

void TradeCommand_CancelPostedTrade_send(int postedTradeId)

{
  void *handle;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TradeCommand_CancelPostedTrade, stores the posted-trade id at
                       offset 0xc, sends it through the common command path, and destroys it.
                       Evidence: ctor/dtor callees install TradeCommand_CancelPostedTrade::vftable
                       and the setter writes the single argument field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166e008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  TradeCommand_CancelPostedTrade_ctor(local_1c);
  local_4 = 0;
  TradeCommand_CancelPostedTrade_setTradeId(local_1c,postedTradeId);
  CommandHandle_releaseIfPresent(handle);
  local_4 = 0xffffffff;
  TradeCommand_CancelPostedTrade_dtor(local_1c);
  ExceptionList = local_c;
  return;
}

