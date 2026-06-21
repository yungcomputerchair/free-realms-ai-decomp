// addr: 0x01445aa0
// name: LoginCommand_SendPassword_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_SendPassword_registerFactory(void) */

void LoginCommand_SendPassword_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LoginCommand_SendPassword component factory for id 0x19a by
                       passing its allocator thunk to ComponentFactory_initSingleton and the
                       secondary registration helper. */
  factoryFn = LoginCommand_SendPassword_create;
  typeId_ = 0x19a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

