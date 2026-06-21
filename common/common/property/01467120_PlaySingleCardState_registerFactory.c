// addr: 0x01467120
// name: PlaySingleCardState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PlaySingleCardState_registerFactory(void) */

void PlaySingleCardState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PlaySingleCardState factory callback with the
                       component/property factory registries. The callback at 014670b0 allocates the
                       object and calls the constructor at 01466730. */
  factoryFn = PlaySingleCardState_create;
  typeId_ = 0x14b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

