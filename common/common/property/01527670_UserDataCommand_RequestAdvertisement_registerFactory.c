// addr: 0x01527670
// name: UserDataCommand_RequestAdvertisement_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestAdvertisement_registerFactory(void) */

void UserDataCommand_RequestAdvertisement_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestAdvertisement command factory under component id 0x223.
                        */
  factoryFn = UserDataCommand_RequestAdvertisement_create;
  typeId_ = 0x223;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

