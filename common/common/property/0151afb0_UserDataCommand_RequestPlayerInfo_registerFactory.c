// addr: 0x0151afb0
// name: UserDataCommand_RequestPlayerInfo_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestPlayerInfo_registerFactory(void) */

void UserDataCommand_RequestPlayerInfo_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestPlayerInfo command factory under component id 0x22f. */
  factoryFn = UserDataCommand_RequestPlayerInfo_create;
  typeId_ = 0x22f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

