// addr: 0x014a4b20
// name: TradeCommand_TransferPostedTrade_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_TransferPostedTrade_registerFactory(void) */

void TradeCommand_TransferPostedTrade_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_TransferPostedTrade allocation factory under
                       component/property type id 0x193. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs TradeCommand_TransferPostedTrade::vftable. */
  factoryFn = TradeCommand_TransferPostedTrade_create;
  typeId_ = 0x193;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

