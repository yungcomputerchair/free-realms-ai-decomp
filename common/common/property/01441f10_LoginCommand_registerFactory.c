// addr: 0x01441f10
// name: LoginCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_registerFactory(void) */

void LoginCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LoginCommand component factory for id 0x4d by passing its
                       allocator thunk to ComponentFactory_initSingleton and the secondary
                       registration helper. */
  factoryFn = LoginCommand_create;
  typeId_ = 0x4d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

