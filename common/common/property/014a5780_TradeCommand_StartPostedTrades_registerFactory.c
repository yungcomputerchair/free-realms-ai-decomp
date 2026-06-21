// addr: 0x014a5780
// name: TradeCommand_StartPostedTrades_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_StartPostedTrades_registerFactory(void) */

void TradeCommand_StartPostedTrades_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_StartPostedTrades allocation factory under
                       component/property type id 0x192. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs TradeCommand_StartPostedTrades::vftable. */
  factoryFn = TradeCommand_StartPostedTrades_create;
  typeId_ = 0x192;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

