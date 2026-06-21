// addr: 0x013c5c60
// name: RuleSetData_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void RuleSetData_registerFactory(void) */

void RuleSetData_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RuleSetData component factory with the shared ComponentFactory.
                       The registered constructor allocates 0xc bytes and initializes
                       RuleSetData::vftable. */
  factoryFn = RuleSetData_create;
  typeId_ = 5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

