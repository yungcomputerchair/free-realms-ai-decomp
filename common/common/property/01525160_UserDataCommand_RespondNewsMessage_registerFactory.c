// addr: 0x01525160
// name: UserDataCommand_RespondNewsMessage_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondNewsMessage_registerFactory(void) */

void UserDataCommand_RespondNewsMessage_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondNewsMessage command factory under component id 0x228. */
  factoryFn = UserDataCommand_RespondNewsMessage_create;
  typeId_ = 0x228;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

