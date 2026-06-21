// addr: 0x01446960
// name: LoginCommand_SendSessionID_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_SendSessionID_registerFactory(void) */

void LoginCommand_SendSessionID_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LoginCommand_SendSessionID component factory for id 0x19b by
                       passing its allocator thunk to ComponentFactory_initSingleton and the
                       secondary registration helper. */
  factoryFn = LoginCommand_SendSessionID_create;
  typeId_ = 0x19b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

