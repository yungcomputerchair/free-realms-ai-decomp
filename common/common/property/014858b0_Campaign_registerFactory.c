// addr: 0x014858b0
// name: Campaign_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Campaign_registerFactory(void) */

void Campaign_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Campaign factory callback with the component/property factory
                       registries. The callback at 01485850 allocates the object and calls the
                       constructor at 014856b0. */
  factoryFn = Campaign_create;
  typeId_ = 0x1c5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

