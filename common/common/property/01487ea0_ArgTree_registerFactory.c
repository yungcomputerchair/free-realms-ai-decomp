// addr: 0x01487ea0
// name: ArgTree_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ArgTree_registerFactory(void) */

void ArgTree_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ArgTree factory callback with the component/property factory
                       registries. The callback at 01487e30 allocates the object and calls the
                       constructor at 01487680. */
  factoryFn = FUN_01487e30;
  typeId_ = 0x167;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

