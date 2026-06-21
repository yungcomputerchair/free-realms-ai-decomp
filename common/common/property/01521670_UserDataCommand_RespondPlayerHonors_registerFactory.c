// addr: 0x01521670
// name: UserDataCommand_RespondPlayerHonors_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondPlayerHonors_registerFactory(void) */

void UserDataCommand_RespondPlayerHonors_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondPlayerHonors command factory under component id 0x236.
                        */
  factoryFn = UserDataCommand_RespondPlayerHonors_create;
  typeId_ = 0x236;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

