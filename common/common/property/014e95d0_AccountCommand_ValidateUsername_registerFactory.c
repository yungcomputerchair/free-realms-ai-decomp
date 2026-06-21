// addr: 0x014e95d0
// name: AccountCommand_ValidateUsername_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_ValidateUsername_registerFactory(void) */

void AccountCommand_ValidateUsername_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_ValidateUsername under
                       type id 0x1e5 and installs the allocator callback. */
  factoryFn = AccountCommand_ValidateUsername_create;
  typeId_ = 0x1e5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

