// addr: 0x01520d50
// name: UserDataCommand_RespondPlayerInfo_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondPlayerInfo_registerFactory(void) */

void UserDataCommand_RespondPlayerInfo_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondPlayerInfo command factory under component id 0x237. */
  factoryFn = UserDataCommand_RespondPlayerInfo_create;
  typeId_ = 0x237;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

