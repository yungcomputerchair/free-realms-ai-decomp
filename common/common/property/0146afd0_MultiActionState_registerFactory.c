// addr: 0x0146afd0
// name: MultiActionState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MultiActionState_registerFactory(void) */

void MultiActionState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the MultiActionState factory callback with the component/property
                       factory registries. The callback at 0146af60 allocates the object and calls
                       the constructor at 0146ad00. */
  factoryFn = MultiActionState_create;
  typeId_ = 0xfe;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

