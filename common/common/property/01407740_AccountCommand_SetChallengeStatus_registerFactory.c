// addr: 0x01407740
// name: AccountCommand_SetChallengeStatus_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_SetChallengeStatus_registerFactory(void) */

void AccountCommand_SetChallengeStatus_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers AccountCommand_SetChallengeStatus with the component/packet factory
                       under type id 0x1e8. The registered maker allocates the class and calls the
                       constructor for that vtable-backed type. */
  factoryFn = FUN_014076e0;
  typeId_ = 0x1e8;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

