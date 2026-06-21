// addr: 0x014a7390
// name: TradeCommand_RemoveCardFromTrade_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_RemoveCardFromTrade_registerFactory(void) */

void TradeCommand_RemoveCardFromTrade_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_RemoveCardFromTrade allocation factory under
                       component/property type id 0x97. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs TradeCommand_RemoveCardFromTrade::vftable. */
  factoryFn = FUN_014a7330;
  typeId_ = 0x97;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

