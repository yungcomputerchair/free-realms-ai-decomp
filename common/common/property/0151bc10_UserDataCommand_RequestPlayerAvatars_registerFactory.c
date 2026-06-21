// addr: 0x0151bc10
// name: UserDataCommand_RequestPlayerAvatars_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestPlayerAvatars_registerFactory(void) */

void UserDataCommand_RequestPlayerAvatars_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestPlayerAvatars command factory under component id 0x22c.
                        */
  factoryFn = UserDataCommand_RequestPlayerAvatars_create;
  typeId_ = 0x22c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

