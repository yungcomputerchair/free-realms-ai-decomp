// addr: 0x014a9a20
// name: TradeCommand_ClearTrade_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_ClearTrade_cloneFrom(void * dest) */

void __thiscall TradeCommand_ClearTrade_cloneFrom(void *this,void *dest)

{
                    /* Initializes/clones a NetworkCommand as TradeCommand_ClearTrade after copying
                       TradeCommand base fields. No subclass fields are copied here. */
  TradeCommand_cloneBaseFields(this,dest);
  FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
               &TradeCommand_ClearTrade::RTTI_Type_Descriptor,0);
  return;
}

