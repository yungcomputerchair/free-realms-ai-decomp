// addr: 0x01312a40
// name: PropertySet_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertySet_registerFactory(void) */

void PropertySet_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PropertySet factory callback in the serialization/property
                       factory registries. The callback allocates 0x10 bytes and constructs
                       PropertySet. */
  factoryFn = PropertySet_create;
  typeId_ = 0x17;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

