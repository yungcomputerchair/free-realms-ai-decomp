// addr: 0x015231d0
// name: UserDataCommand_RespondDBHonors_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_RespondDBHonors_registerFactory(void) */

void UserDataCommand_RespondDBHonors_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RespondDBHonors command factory under component id 0x233. */
  factoryFn = UserDataCommand_RespondDBHonors_create;
  typeId_ = 0x233;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

