// addr: 0x014eb730
// name: AccountCommand_RedeemCode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_RedeemCode_registerFactory(void) */

void AccountCommand_RedeemCode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_RedeemCode under type id
                       0x1b0 and installs the allocator callback. */
  factoryFn = AccountCommand_RedeemCode_create;
  typeId_ = 0x1b0;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

