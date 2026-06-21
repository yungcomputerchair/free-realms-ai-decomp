// addr: 0x01471380
// name: ExecuteRuleState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ExecuteRuleState_registerFactory(void) */

void ExecuteRuleState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ExecuteRuleState factory callback with the component/property
                       factory registries. The callback at 01471310 allocates the object and calls
                       the constructor at 01471220. */
  factoryFn = ExecuteRuleState_create;
  typeId_ = 0x17b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

