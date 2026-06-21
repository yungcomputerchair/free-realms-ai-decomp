// addr: 0x012bdf50
// name: TradeCommand_AcceptPostedTrade_send
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AcceptPostedTrade_send(int postedTradeId) */

void TradeCommand_AcceptPostedTrade_send(int postedTradeId)

{
  void *handle;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TradeCommand_AcceptPostedTrade, sets its posted-trade id field,
                       sends it through the common command path, and destroys it. Evidence:
                       ctor/dtor callees install TradeCommand_AcceptPostedTrade::vftable and the
                       setter stores the argument at offset 0xc. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166e038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  TradeCommand_AcceptPostedTrade_ctor(local_20);
  local_4 = 0;
  TradeCommand_AcceptPostedTrade_setTradeId(local_20,postedTradeId);
  CommandHandle_releaseIfPresent(handle);
  local_4 = 0xffffffff;
  TradeCommand_AcceptPostedTrade_dtor(local_20);
  ExceptionList = local_c;
  return;
}

