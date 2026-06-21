// addr: 0x0151c030
// name: UserDataCommand_RequestDBHonors_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestDBHonors_registerFactory(void) */

void UserDataCommand_RequestDBHonors_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestDBHonors command factory under component id 0x22b. */
  factoryFn = UserDataCommand_RequestDBHonors_create;
  typeId_ = 0x22b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

