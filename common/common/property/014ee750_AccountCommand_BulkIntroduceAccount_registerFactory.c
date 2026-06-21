// addr: 0x014ee750
// name: AccountCommand_BulkIntroduceAccount_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_BulkIntroduceAccount_registerFactory(void) */

void AccountCommand_BulkIntroduceAccount_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_BulkIntroduceAccount under
                       type id 0x115 and installs the allocator callback. */
  factoryFn = AccountCommand_BulkIntroduceAccount_create;
  typeId_ = 0x115;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

