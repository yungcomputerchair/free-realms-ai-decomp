// addr: 0x014aa7c0
// name: TradeCommand_CancelTradeRequest_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_CancelTradeRequest_registerFactory(void) */

void TradeCommand_CancelTradeRequest_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers TradeCommand_CancelTradeRequest with the component factory under
                       command/type id 0x98, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014aa760;
  typeId_ = 0x98;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

