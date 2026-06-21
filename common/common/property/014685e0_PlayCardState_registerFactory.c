// addr: 0x014685e0
// name: PlayCardState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PlayCardState_registerFactory(void) */

void PlayCardState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PlayCardState factory callback with the component/property
                       factory registries. The callback at 01468570 allocates the object and calls
                       the constructor at 01467b80. */
  factoryFn = PlayCardState_create;
  typeId_ = 0xf7;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

