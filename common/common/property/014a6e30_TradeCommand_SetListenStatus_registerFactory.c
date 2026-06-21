// addr: 0x014a6e30
// name: TradeCommand_SetListenStatus_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_SetListenStatus_registerFactory(void) */

void TradeCommand_SetListenStatus_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_SetListenStatus allocation factory under
                       component/property type id 0x1af. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs TradeCommand_SetListenStatus::vftable. */
  factoryFn = TradeCommand_SetListenStatus_create;
  typeId_ = 0x1af;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

