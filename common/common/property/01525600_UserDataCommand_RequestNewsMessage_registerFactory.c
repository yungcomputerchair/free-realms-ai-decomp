// addr: 0x01525600
// name: UserDataCommand_RequestNewsMessage_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestNewsMessage_registerFactory(void) */

void UserDataCommand_RequestNewsMessage_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestNewsMessage command factory under component id 0x227. */
  factoryFn = UserDataCommand_RequestNewsMessage_create;
  typeId_ = 0x227;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

