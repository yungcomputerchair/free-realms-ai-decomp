// addr: 0x0144e680
// name: CWMultiActionState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWMultiActionState_registerFactory(void) */

void CWMultiActionState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWMultiActionState component factory for id 0x222f8 by passing
                       its allocator thunk to ComponentFactory_initSingleton and the secondary
                       registration helper. */
  factoryFn = CWMultiActionState_create;
  typeId_ = 0x222f8;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

