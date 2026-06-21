// addr: 0x0147a900
// name: CloneState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CloneState_registerFactory(void) */

void CloneState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CloneState factory callback with the component/property factory
                       registries. The callback at 0147a890 allocates the object and calls the
                       constructor at 0147a780. */
  factoryFn = CloneState_create;
  typeId_ = 0x13d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

