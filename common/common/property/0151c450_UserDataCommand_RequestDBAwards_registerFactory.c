// addr: 0x0151c450
// name: UserDataCommand_RequestDBAwards_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RequestDBAwards_registerFactory(void) */

void UserDataCommand_RequestDBAwards_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RequestDBAwards command factory under component id 0x22a. */
  factoryFn = UserDataCommand_RequestDBAwards_create;
  typeId_ = 0x22a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

