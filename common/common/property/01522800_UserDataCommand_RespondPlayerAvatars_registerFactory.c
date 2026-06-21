// addr: 0x01522800
// name: UserDataCommand_RespondPlayerAvatars_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondPlayerAvatars_registerFactory(void) */

void UserDataCommand_RespondPlayerAvatars_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondPlayerAvatars command factory under component id 0x234.
                        */
  factoryFn = UserDataCommand_RespondPlayerAvatars_create;
  typeId_ = 0x234;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

