// addr: 0x015246b0
// name: UserDataCommand_RespondDBAvatars_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondDBAvatars_registerFactory(void) */

void UserDataCommand_RespondDBAvatars_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondDBAvatars command factory under component id 0x231. */
  factoryFn = UserDataCommand_RespondDBAvatars_create;
  typeId_ = 0x231;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

