// addr: 0x013d2eb0
// name: TradeCommand_RequestPostedTrades_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_RequestPostedTrades_registerFactory(void) */

void TradeCommand_RequestPostedTrades_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_RequestPostedTrades command factory. The
                       registered constructor path sets TradeCommand_RequestPostedTrades::vftable.
                        */
  factoryFn = FUN_013d2e50;
  typeId_ = 0x191;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

