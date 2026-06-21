// addr: 0x013d0af0
// name: TradeCommand_AcceptPostedTrade_setTradeId
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AcceptPostedTrade_setTradeId(void * this, int tradeId) */

void __thiscall TradeCommand_AcceptPostedTrade_setTradeId(void *this,int tradeId)

{
                    /* Sets the trade id field at offset 0xc for an AcceptPostedTrade command. */
  *(int *)((int)this + 0xc) = tradeId;
  return;
}

