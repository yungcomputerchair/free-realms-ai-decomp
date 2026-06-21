// addr: 0x014ac540
// name: TradeCommand_AcceptTrade_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_AcceptTrade_registerFactory(void) */

void TradeCommand_AcceptTrade_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers TradeCommand_AcceptTrade with the component factory under
                       command/type id 0x96, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014ac4e0;
  typeId_ = 0x96;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

