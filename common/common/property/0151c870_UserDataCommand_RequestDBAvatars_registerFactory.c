// addr: 0x0151c870
// name: UserDataCommand_RequestDBAvatars_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestDBAvatars_registerFactory(void) */

void UserDataCommand_RequestDBAvatars_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestDBAvatars command factory under component id 0x229. */
  factoryFn = UserDataCommand_RequestDBAvatars_create;
  typeId_ = 0x229;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

