// addr: 0x0145b4e0
// name: WhileState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void WhileState_registerFactory(void) */

void WhileState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the WhileState factory callback with the component/property factory
                       registries. The callback at 0145b470 allocates the object and calls the
                       constructor at 0145b2c0. */
  factoryFn = WhileState_create;
  typeId_ = 0x196;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

