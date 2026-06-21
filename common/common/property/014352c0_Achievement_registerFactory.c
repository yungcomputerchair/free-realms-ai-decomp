// addr: 0x014352c0
// name: Achievement_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Achievement_registerFactory(void) */

void Achievement_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Achievement component factory for id 0x1e0 by passing its
                       allocator thunk to ComponentFactory_initSingleton and the secondary
                       registration helper. */
  factoryFn = Achievement_create;
  typeId_ = 0x1e0;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

