// addr: 0x014a9720
// name: TradeCommand_EndPostedTrades_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_EndPostedTrades_registerFactory(void) */

void TradeCommand_EndPostedTrades_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers TradeCommand_EndPostedTrades with the component factory under
                       command/type id 400, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = TradeCommand_EndPostedTrades_create;
  typeId_ = 400;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

