// addr: 0x014428c0
// name: TradeCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_registerFactory(void) */

void TradeCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand component factory for id 0x92 by passing its
                       allocator thunk to ComponentFactory_initSingleton and the secondary
                       registration helper. */
  factoryFn = FUN_01442860;
  typeId_ = 0x92;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

