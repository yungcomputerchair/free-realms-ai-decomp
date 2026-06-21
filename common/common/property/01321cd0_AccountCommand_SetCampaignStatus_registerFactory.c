// addr: 0x01321cd0
// name: AccountCommand_SetCampaignStatus_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_SetCampaignStatus_registerFactory(void) */

void AccountCommand_SetCampaignStatus_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the AccountCommand_SetCampaignStatus factory callback with the
                       property command factory registries. The callback allocates 0x18 bytes and
                       constructs that command class. */
  factoryFn = FUN_01321c70;
  typeId_ = 0x19f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

