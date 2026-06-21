// addr: 0x0147b410
// name: ChainedActionState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ChainedActionState_registerFactory(void) */

void ChainedActionState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ChainedActionState factory callback with the component/property
                       factory registries. The callback at 0147b3a0 allocates the object and calls
                       the constructor at 0147b050. */
  factoryFn = ChainedActionState_create;
  typeId_ = 0x100;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

