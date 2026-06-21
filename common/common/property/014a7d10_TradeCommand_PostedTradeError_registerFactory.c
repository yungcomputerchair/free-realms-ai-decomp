// addr: 0x014a7d10
// name: TradeCommand_PostedTradeError_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_PostedTradeError_registerFactory(void) */

void TradeCommand_PostedTradeError_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_PostedTradeError allocation factory under
                       component/property type id 0x195. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs TradeCommand_PostedTradeError::vftable. */
  factoryFn = TradeCommand_PostedTradeError_create;
  typeId_ = 0x195;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

