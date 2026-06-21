// addr: 0x014a9b40
// name: TradeCommand_ClearTrade_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_ClearTrade_registerFactory(void) */

void TradeCommand_ClearTrade_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers TradeCommand_ClearTrade with the component factory under
                       command/type id 0x9a, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014a9ae0;
  typeId_ = 0x9a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

