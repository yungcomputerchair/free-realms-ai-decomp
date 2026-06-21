// addr: 0x014a8790
// name: TradeCommand_IssueTradeRequest_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_IssueTradeRequest_registerFactory(void) */

void TradeCommand_IssueTradeRequest_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_IssueTradeRequest allocation factory under
                       component/property type id 0x93. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs TradeCommand_IssueTradeRequest::vftable. */
  factoryFn = FUN_014a8730;
  typeId_ = 0x93;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

