// addr: 0x015287d0
// name: UserDataCommand_Subscribe_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_Subscribe_registerFactory(void) */

void UserDataCommand_Subscribe_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Subscribe command factory under component id 0x21f. */
  factoryFn = UserDataCommand_Subscribe_create;
  typeId_ = 0x21f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

