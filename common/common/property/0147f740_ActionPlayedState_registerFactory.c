// addr: 0x0147f740
// name: ActionPlayedState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ActionPlayedState_registerFactory(void) */

void ActionPlayedState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ActionPlayedState factory callback with the component/property
                       factory registries. The callback at 0147f6d0 allocates the object and calls
                       the constructor at 0147f3f0. */
  factoryFn = ActionPlayedState_create;
  typeId_ = 0xfb;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

