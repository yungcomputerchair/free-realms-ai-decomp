// addr: 0x013d3700
// name: InstanceID_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void InstanceID_registerFactory(void) */

void InstanceID_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the InstanceID persistent component factory. The constructor path
                       initializes PersistentBase/PersistentComponent and InstanceID::vftable. */
  factoryFn = FUN_013d36a0;
  typeId_ = 0x15e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

