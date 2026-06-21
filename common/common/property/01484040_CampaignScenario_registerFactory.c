// addr: 0x01484040
// name: CampaignScenario_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CampaignScenario_registerFactory(void) */

void CampaignScenario_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CampaignScenario factory callback with the component/property
                       factory registries. The callback at 01483fd0 allocates the object and calls
                       the constructor at 01483e10. */
  factoryFn = CampaignScenario_create;
  typeId_ = 0x1c6;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

