// addr: 0x013d0650
// name: TradeCommand_CancelPostedTrade_setTradeId
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_CancelPostedTrade_setTradeId(void * this, int tradeId) */

void __thiscall TradeCommand_CancelPostedTrade_setTradeId(void *this,int tradeId)

{
                    /* Sets the trade id field at offset 0xc for a CancelPostedTrade command. */
  *(int *)((int)this + 0xc) = tradeId;
  return;
}

