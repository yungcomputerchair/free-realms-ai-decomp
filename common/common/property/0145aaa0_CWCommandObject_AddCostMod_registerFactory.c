// addr: 0x0145aaa0
// name: CWCommandObject_AddCostMod_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWCommandObject_AddCostMod_registerFactory(void) */

void CWCommandObject_AddCostMod_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWCommandObject_AddCostMod factory callback with the
                       component/property factory registries. The callback at 0145aa20 allocates the
                       object and calls the constructor at 0145a920. */
  factoryFn = CWCommandObject_AddCostMod_create;
  typeId_ = 0x222fe;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

