// addr: 0x0144d370
// name: CWStartOfGameState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWStartOfGameState_registerFactory(void) */

void CWStartOfGameState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWStartOfGameState component factory for id 0x222ea by passing
                       its allocator thunk to ComponentFactory_initSingleton and the secondary
                       registration helper. */
  factoryFn = CWStartOfGameState_create;
  typeId_ = 0x222ea;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

