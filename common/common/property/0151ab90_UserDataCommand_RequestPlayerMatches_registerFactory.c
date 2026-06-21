// addr: 0x0151ab90
// name: UserDataCommand_RequestPlayerMatches_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestPlayerMatches_registerFactory(void) */

void UserDataCommand_RequestPlayerMatches_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestPlayerMatches command factory under component id 0x230
                       using the allocator/creator at 0151ab30. */
  factoryFn = UserDataCommand_RequestPlayerMatches_create;
  typeId_ = 0x230;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

