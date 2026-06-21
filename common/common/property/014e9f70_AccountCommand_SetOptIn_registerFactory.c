// addr: 0x014e9f70
// name: AccountCommand_SetOptIn_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_SetOptIn_registerFactory(void) */

void AccountCommand_SetOptIn_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_SetOptIn under type id
                       0x1bc and installs the allocator callback. */
  factoryFn = AccountCommand_SetOptIn_create;
  typeId_ = 0x1bc;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

