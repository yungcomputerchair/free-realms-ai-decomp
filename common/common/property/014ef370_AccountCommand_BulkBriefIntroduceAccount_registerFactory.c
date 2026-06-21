// addr: 0x014ef370
// name: AccountCommand_BulkBriefIntroduceAccount_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_BulkBriefIntroduceAccount_registerFactory(void) */

void AccountCommand_BulkBriefIntroduceAccount_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_BulkBriefIntroduceAccount
                       under type id 0x122 and installs the allocator callback. */
  factoryFn = AccountCommand_BulkBriefIntroduceAccount_create;
  typeId_ = 0x122;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

