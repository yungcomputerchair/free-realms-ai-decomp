// addr: 0x01483630
// name: InstanceSubID_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void InstanceSubID_registerFactory(void) */

void InstanceSubID_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the InstanceSubID factory callback with the component/property
                       factory registries. The callback at 014835d0 allocates the object and calls
                       the constructor at 01483170. */
  factoryFn = InstanceSubID_create;
  typeId_ = 0x1d9;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

