// addr: 0x01475a80
// name: DiscardCardState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DiscardCardState_registerFactory(void) */

void DiscardCardState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the DiscardCardState factory callback with the component/property
                       factory registries. The callback at 01475a10 allocates the object and calls
                       the constructor at 01475890. */
  factoryFn = DiscardCardState_create;
  typeId_ = 0x14a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

