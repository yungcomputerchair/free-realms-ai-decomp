// addr: 0x014ed650
// name: AccountCommand_GetAccountInfo_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_GetAccountInfo_registerFactory(void) */

void AccountCommand_GetAccountInfo_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_GetAccountInfo under type
                       id 0x129 and installs the allocator callback. */
  factoryFn = AccountCommand_GetAccountInfo_create;
  typeId_ = 0x129;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

