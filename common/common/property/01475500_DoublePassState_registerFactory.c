// addr: 0x01475500
// name: DoublePassState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DoublePassState_registerFactory(void) */

void DoublePassState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the DoublePassState factory callback with the component/property
                       factory registries. The callback at 01475490 allocates the object and calls
                       the constructor at 01475230. */
  factoryFn = DoublePassState_create;
  typeId_ = 0xf9;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

