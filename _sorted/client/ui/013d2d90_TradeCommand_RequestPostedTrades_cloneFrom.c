// addr: 0x013d2d90
// name: TradeCommand_RequestPostedTrades_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_RequestPostedTrades_cloneFrom(void * dest) */

void TradeCommand_RequestPostedTrades_cloneFrom(void *dest)

{
  void *in_ECX;
  
                    /* Initializes/clones a NetworkCommand as TradeCommand_RequestPostedTrades. This
                       command carries only the TradeCommand base fields here. */
  TradeCommand_cloneBaseFields(in_ECX,dest);
  FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
               &TradeCommand_RequestPostedTrades::RTTI_Type_Descriptor,0);
  return;
}

