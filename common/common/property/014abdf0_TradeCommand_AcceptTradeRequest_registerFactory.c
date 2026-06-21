// addr: 0x014abdf0
// name: TradeCommand_AcceptTradeRequest_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_AcceptTradeRequest_registerFactory(void) */

void TradeCommand_AcceptTradeRequest_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers TradeCommand_AcceptTradeRequest with the component factory under
                       command/type id 0x94, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014abd90;
  typeId_ = 0x94;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

