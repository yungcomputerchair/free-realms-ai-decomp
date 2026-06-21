// addr: 0x014efa90
// name: AccountCommand_AddAchievement_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_AddAchievement_registerFactory(void) */

void AccountCommand_AddAchievement_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_AddAchievement under type
                       id 0x1e1 and installs the allocator callback. */
  factoryFn = AccountCommand_AddAchievement_create;
  typeId_ = 0x1e1;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

