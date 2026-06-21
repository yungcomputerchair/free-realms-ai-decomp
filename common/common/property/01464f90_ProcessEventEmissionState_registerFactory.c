// addr: 0x01464f90
// name: ProcessEventEmissionState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ProcessEventEmissionState_registerFactory(void) */

void ProcessEventEmissionState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ProcessEventEmissionState factory callback with the
                       component/property factory registries. The callback at 01464f20 allocates the
                       object and calls the constructor at 01464d40. */
  factoryFn = ProcessEventEmissionState_create;
  typeId_ = 0xfc;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

