// addr: 0x014eaa20
// name: AccountCommand_SetAchievementList_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_SetAchievementList_registerFactory(void) */

void AccountCommand_SetAchievementList_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_SetAchievementList under
                       type id 0x1e2 and installs the allocator callback. */
  factoryFn = AccountCommand_SetAchievementList_create;
  typeId_ = 0x1e2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

