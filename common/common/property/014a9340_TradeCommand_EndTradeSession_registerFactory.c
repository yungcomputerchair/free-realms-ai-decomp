// addr: 0x014a9340
// name: TradeCommand_EndTradeSession_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_EndTradeSession_registerFactory(void) */

void TradeCommand_EndTradeSession_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers TradeCommand_EndTradeSession with the component factory under
                       command/type id 0x99, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014a92e0;
  typeId_ = 0x99;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

