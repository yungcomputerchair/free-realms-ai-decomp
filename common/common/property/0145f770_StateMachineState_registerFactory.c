// addr: 0x0145f770
// name: StateMachineState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void StateMachineState_registerFactory(void) */

void StateMachineState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the StateMachineState factory callback with the component/property
                       factory registries. The callback at 0145f700 allocates the object and calls
                       the constructor at 0145d8c0. */
  factoryFn = StateMachineState_create;
  typeId_ = 0xea;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

