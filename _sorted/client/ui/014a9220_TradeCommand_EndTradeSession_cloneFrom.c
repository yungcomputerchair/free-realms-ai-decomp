// addr: 0x014a9220
// name: TradeCommand_EndTradeSession_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_EndTradeSession_cloneFrom(void * dest) */

void __thiscall TradeCommand_EndTradeSession_cloneFrom(void *this,void *dest)

{
                    /* Initializes/clones a NetworkCommand as TradeCommand_EndTradeSession after
                       copying TradeCommand base fields. No subclass fields are copied here. */
  TradeCommand_cloneBaseFields(this,dest);
  FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
               &TradeCommand_EndTradeSession::RTTI_Type_Descriptor,0);
  return;
}

