// addr: 0x015267c0
// name: UserDataCommand_RequestFeatureRotator_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestFeatureRotator_registerFactory(void) */

void UserDataCommand_RequestFeatureRotator_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestFeatureRotator command factory under component id 0x225.
                        */
  factoryFn = UserDataCommand_RequestFeatureRotator_create;
  typeId_ = 0x225;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

