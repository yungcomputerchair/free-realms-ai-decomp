// addr: 0x014830f0
// name: InstanceSubIDFlags_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void InstanceSubIDFlags_registerFactory(void) */

void InstanceSubIDFlags_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the InstanceSubIDFlags factory callback with the component/property
                       factory registries. The callback at 01483090 allocates the object and calls
                       the constructor at 01482ca0. */
  factoryFn = InstanceSubIDFlags_create;
  typeId_ = 0x1da;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

