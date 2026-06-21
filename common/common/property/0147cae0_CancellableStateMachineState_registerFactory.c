// addr: 0x0147cae0
// name: CancellableStateMachineState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CancellableStateMachineState_registerFactory(void) */

void CancellableStateMachineState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CancellableStateMachineState factory callback with the
                       component/property factory registries. The callback at 0147ca70 allocates the
                       object and calls the constructor at 0147c980. */
  factoryFn = CancellableStateMachineState_create;
  typeId_ = 0xf5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

