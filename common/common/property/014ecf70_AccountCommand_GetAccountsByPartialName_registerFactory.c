// addr: 0x014ecf70
// name: AccountCommand_GetAccountsByPartialName_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_GetAccountsByPartialName_registerFactory(void) */

void AccountCommand_GetAccountsByPartialName_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_GetAccountsByPartialName
                       under type id 0x1cb and installs the allocator callback. */
  factoryFn = AccountCommand_GetAccountsByPartialName_create;
  typeId_ = 0x1cb;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

