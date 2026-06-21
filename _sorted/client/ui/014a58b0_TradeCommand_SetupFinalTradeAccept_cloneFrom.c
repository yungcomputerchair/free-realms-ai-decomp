// addr: 0x014a58b0
// name: TradeCommand_SetupFinalTradeAccept_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_SetupFinalTradeAccept_cloneFrom(void * dest) */

void __thiscall TradeCommand_SetupFinalTradeAccept_cloneFrom(void *this,void *dest)

{
                    /* Initializes/clones a NetworkCommand as TradeCommand_SetupFinalTradeAccept
                       after copying TradeCommand base fields. No subclass fields are copied in this
                       function. */
  TradeCommand_cloneBaseFields(this,dest);
  FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
               &TradeCommand_SetupFinalTradeAccept::RTTI_Type_Descriptor,0);
  return;
}

