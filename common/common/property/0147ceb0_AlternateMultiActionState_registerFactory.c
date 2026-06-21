// addr: 0x0147ceb0
// name: AlternateMultiActionState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AlternateMultiActionState_registerFactory(void) */

void AlternateMultiActionState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the AlternateMultiActionState factory callback with the
                       component/property factory registries. The callback at 0147ce40 allocates the
                       object and calls the constructor at 0147cb00. */
  factoryFn = AlternateMultiActionState_create;
  typeId_ = 0x113;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

