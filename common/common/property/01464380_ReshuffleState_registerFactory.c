// addr: 0x01464380
// name: ReshuffleState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ReshuffleState_registerFactory(void) */

void ReshuffleState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ReshuffleState factory callback with the component/property
                       factory registries. The callback at 01464310 allocates the object and calls
                       the constructor at 01463c00. */
  factoryFn = ReshuffleState_create;
  typeId_ = 0x136;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

