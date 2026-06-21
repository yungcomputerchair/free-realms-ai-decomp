// addr: 0x0151b3d0
// name: UserDataCommand_RequestPlayerHonors_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestPlayerHonors_registerFactory(void) */

void UserDataCommand_RequestPlayerHonors_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestPlayerHonors command factory under component id 0x22e.
                        */
  factoryFn = UserDataCommand_RequestPlayerHonors_create;
  typeId_ = 0x22e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

