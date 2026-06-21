// addr: 0x01470260
// name: GetSimultaneousTargetState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GetSimultaneousTargetState_registerFactory(void) */

void GetSimultaneousTargetState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the GetSimultaneousTargetState factory callback with the
                       component/property factory registries. The callback at 014701f0 allocates the
                       object and calls the constructor at 014700b0. */
  factoryFn = GetSimultaneousTargetState_create;
  typeId_ = 0x17a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

