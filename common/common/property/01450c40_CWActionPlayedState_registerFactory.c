// addr: 0x01450c40
// name: CWActionPlayedState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWActionPlayedState_registerFactory(void) */

void CWActionPlayedState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWActionPlayedState component factory for id 0x222eb by passing
                       its allocator thunk to ComponentFactory_initSingleton and the secondary
                       registration helper. */
  factoryFn = CWActionPlayedState_create;
  typeId_ = 0x222eb;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

