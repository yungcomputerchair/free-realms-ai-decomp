// addr: 0x01469bd0
// name: MultiPlayerState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MultiPlayerState_registerFactory(void) */

void MultiPlayerState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the MultiPlayerState factory callback with the component/property
                       factory registries. The callback at 01469b60 allocates the object and calls
                       the constructor at 01469ab0. */
  factoryFn = MultiPlayerState_create;
  typeId_ = 0x103;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

