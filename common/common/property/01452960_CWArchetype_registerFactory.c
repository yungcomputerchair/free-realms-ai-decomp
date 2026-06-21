// addr: 0x01452960
// name: CWArchetype_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWArchetype_registerFactory(void) */

void CWArchetype_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWArchetype component factory for id 0x222f4 by passing its
                       allocator thunk to ComponentFactory_initSingleton and the secondary
                       registration helper. */
  factoryFn = CWArchetype_create;
  typeId_ = 0x222f4;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

