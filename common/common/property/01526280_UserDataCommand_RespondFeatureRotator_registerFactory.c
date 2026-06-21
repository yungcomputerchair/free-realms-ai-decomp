// addr: 0x01526280
// name: UserDataCommand_RespondFeatureRotator_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondFeatureRotator_registerFactory(void) */

void UserDataCommand_RespondFeatureRotator_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondFeatureRotator command factory under component id 0x226.
                        */
  factoryFn = UserDataCommand_RespondFeatureRotator_create;
  typeId_ = 0x226;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

