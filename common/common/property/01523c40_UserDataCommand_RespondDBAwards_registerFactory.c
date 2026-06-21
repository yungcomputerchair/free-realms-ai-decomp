// addr: 0x01523c40
// name: UserDataCommand_RespondDBAwards_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondDBAwards_registerFactory(void) */

void UserDataCommand_RespondDBAwards_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondDBAwards command factory under component id 0x232. */
  factoryFn = UserDataCommand_RespondDBAwards_create;
  typeId_ = 0x232;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

