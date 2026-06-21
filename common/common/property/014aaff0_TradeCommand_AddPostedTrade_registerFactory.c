// addr: 0x014aaff0
// name: TradeCommand_AddPostedTrade_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_AddPostedTrade_registerFactory(void) */

void TradeCommand_AddPostedTrade_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers TradeCommand_AddPostedTrade with the component factory under
                       command/type id 0x18e, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = TradeCommand_AddPostedTrade_create;
  typeId_ = 0x18e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

