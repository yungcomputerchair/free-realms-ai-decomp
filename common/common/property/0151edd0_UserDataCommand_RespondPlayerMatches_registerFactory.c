// addr: 0x0151edd0
// name: UserDataCommand_RespondPlayerMatches_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondPlayerMatches_registerFactory(void) */

void UserDataCommand_RespondPlayerMatches_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondPlayerMatches command factory under component id 0x238.
                        */
  factoryFn = UserDataCommand_RespondPlayerMatches_create;
  typeId_ = 0x238;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

