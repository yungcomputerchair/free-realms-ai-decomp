// addr: 0x014a6b10
// name: TradeCommand_SetTradeAllowed_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_SetTradeAllowed_registerFactory(void) */

void TradeCommand_SetTradeAllowed_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_SetTradeAllowed allocation factory under
                       component/property type id 0x15c. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs TradeCommand_SetTradeAllowed::vftable. */
  factoryFn = FUN_014a6ab0;
  typeId_ = 0x15c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

