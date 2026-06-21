// addr: 0x0139d280
// name: Card_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Card_registerFactory(void) */

void Card_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Card factory callback in both object factory registries. The
                       callback constructs Card and returns the adjusted persistent subobject
                       pointer. */
  factoryFn = FUN_0139d200;
  typeId_ = 0xa8;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

