// addr: 0x014e8bb0
// name: AccountCommand_RequestStadiumInfo_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_RequestStadiumInfo_registerFactory(void) */

void AccountCommand_RequestStadiumInfo_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_RequestStadiumInfo under
                       type id 0x21a and installs the allocator callback. */
  factoryFn = AccountCommand_RequestStadiumInfo_create;
  typeId_ = 0x21a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

