// addr: 0x013d0d90
// name: TradeCommand_AcceptPostedTrade_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_AcceptPostedTrade_registerFactory(void) */

void TradeCommand_AcceptPostedTrade_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_AcceptPostedTrade command factory. The registered
                       thunk allocates 0x14 bytes and runs the ctor that sets
                       TradeCommand_AcceptPostedTrade::vftable. */
  factoryFn = FUN_013d0d30;
  typeId_ = 0x18d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

