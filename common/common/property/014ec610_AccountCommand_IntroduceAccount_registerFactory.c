// addr: 0x014ec610
// name: AccountCommand_IntroduceAccount_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_IntroduceAccount_registerFactory(void) */

void AccountCommand_IntroduceAccount_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_IntroduceAccount under
                       type id 0x72 and installs the allocator callback. */
  factoryFn = AccountCommand_IntroduceAccount_create;
  typeId_ = 0x72;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

