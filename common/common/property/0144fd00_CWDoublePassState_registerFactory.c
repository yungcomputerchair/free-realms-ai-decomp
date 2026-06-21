// addr: 0x0144fd00
// name: CWDoublePassState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWDoublePassState_registerFactory(void) */

void CWDoublePassState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWDoublePassState component factory for id 0x222f7 by passing
                       its allocator thunk to ComponentFactory_initSingleton and the secondary
                       registration helper. */
  factoryFn = CWDoublePassState_create;
  typeId_ = 0x222f7;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

