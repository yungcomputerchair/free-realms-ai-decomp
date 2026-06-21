// addr: 0x01528350
// name: UserDataCommand_Unsubscribe_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_Unsubscribe_registerFactory(void) */

void UserDataCommand_Unsubscribe_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Unsubscribe command factory under component id 0x220. */
  factoryFn = UserDataCommand_Unsubscribe_create;
  typeId_ = 0x220;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

