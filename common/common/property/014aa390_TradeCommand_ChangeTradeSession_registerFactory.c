// addr: 0x014aa390
// name: TradeCommand_ChangeTradeSession_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_ChangeTradeSession_registerFactory(void) */

void TradeCommand_ChangeTradeSession_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers TradeCommand_ChangeTradeSession with the component factory under
                       command/type id 0x10e, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014aa330;
  typeId_ = 0x10e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

