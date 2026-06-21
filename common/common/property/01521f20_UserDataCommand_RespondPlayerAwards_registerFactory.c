// addr: 0x01521f20
// name: UserDataCommand_RespondPlayerAwards_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondPlayerAwards_registerFactory(void) */

void UserDataCommand_RespondPlayerAwards_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondPlayerAwards command factory under component id 0x235.
                        */
  factoryFn = UserDataCommand_RespondPlayerAwards_create;
  typeId_ = 0x235;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

