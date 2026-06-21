// addr: 0x01528000
// name: UserDataCommand_DataUpdated_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_DataUpdated_registerFactory(void) */

void UserDataCommand_DataUpdated_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the DataUpdated command factory under component id 0x221. */
  factoryFn = FUN_01527fa0;
  typeId_ = 0x221;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

