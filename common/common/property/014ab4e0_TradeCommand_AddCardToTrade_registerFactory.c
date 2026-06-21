// addr: 0x014ab4e0
// name: TradeCommand_AddCardToTrade_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_AddCardToTrade_registerFactory(void) */

void TradeCommand_AddCardToTrade_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers TradeCommand_AddCardToTrade with the component factory under
                       command/type id 0x95, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014ab480;
  typeId_ = 0x95;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

