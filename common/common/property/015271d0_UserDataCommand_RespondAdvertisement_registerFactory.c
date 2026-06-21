// addr: 0x015271d0
// name: UserDataCommand_RespondAdvertisement_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondAdvertisement_registerFactory(void) */

void UserDataCommand_RespondAdvertisement_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondAdvertisement command factory under component id 0x224.
                        */
  factoryFn = UserDataCommand_RespondAdvertisement_create;
  typeId_ = 0x224;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

