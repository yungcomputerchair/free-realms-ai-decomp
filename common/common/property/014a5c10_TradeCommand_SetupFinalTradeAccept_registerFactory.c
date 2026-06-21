// addr: 0x014a5c10
// name: TradeCommand_SetupFinalTradeAccept_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_SetupFinalTradeAccept_registerFactory(void) */

void TradeCommand_SetupFinalTradeAccept_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_SetupFinalTradeAccept allocation factory under
                       component/property type id 0x9c. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs TradeCommand_SetupFinalTradeAccept::vftable. */
  factoryFn = FUN_014a5bb0;
  typeId_ = 0x9c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

