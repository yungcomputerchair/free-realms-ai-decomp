// addr: 0x014ebe90
// name: AccountCommand_ModifyRestrictions_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_ModifyRestrictions_registerFactory(void) */

void AccountCommand_ModifyRestrictions_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_ModifyRestrictions under
                       type id 0x1ce and installs the allocator callback. */
  factoryFn = AccountCommand_ModifyRestrictions_create;
  typeId_ = 0x1ce;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

