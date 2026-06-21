// addr: 0x014b8f70
// name: LoginCommand_GetChallenge_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_GetChallenge_registerFactory(void) */

void LoginCommand_GetChallenge_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LoginCommand_GetChallenge component factory under type id 0x4e.
                       The wrapper passes factory thunk 014b8f10 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014b8d50, whose body installs
                       LoginCommand_GetChallenge::vftable. */
  factoryFn = LoginCommand_GetChallenge_create;
  typeId_ = 0x4e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

