// addr: 0x01460a30
// name: RevealState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void RevealState_registerFactory(void) */

void RevealState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RevealState factory callback with the component/property
                       factory registries. The callback at 014609c0 allocates the object and calls
                       the constructor at 01460790. */
  factoryFn = RevealState_create;
  typeId_ = 0xff;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

