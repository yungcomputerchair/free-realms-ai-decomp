// addr: 0x013d08b0
// name: TradeCommand_CancelPostedTrade_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_CancelPostedTrade_registerFactory(void) */

void TradeCommand_CancelPostedTrade_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_CancelPostedTrade command factory. The registered
                       allocation thunk constructs an object with
                       TradeCommand_CancelPostedTrade::vftable. */
  factoryFn = FUN_013d0850;
  typeId_ = 399;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

