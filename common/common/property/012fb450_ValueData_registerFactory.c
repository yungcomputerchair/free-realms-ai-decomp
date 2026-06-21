// addr: 0x012fb450
// name: ValueData_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ValueData_registerFactory(void) */

void ValueData_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ValueData allocation factory with both property factory
                       registries. The registered callback allocates 0x0c bytes and calls the
                       ValueData constructor. */
  factoryFn = FUN_012fb3f0;
  typeId_ = 0x16;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

