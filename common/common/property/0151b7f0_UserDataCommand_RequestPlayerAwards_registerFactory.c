// addr: 0x0151b7f0
// name: UserDataCommand_RequestPlayerAwards_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestPlayerAwards_registerFactory(void) */

void UserDataCommand_RequestPlayerAwards_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestPlayerAwards command factory under component id 0x22d.
                        */
  factoryFn = UserDataCommand_RequestPlayerAwards_create;
  typeId_ = 0x22d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

