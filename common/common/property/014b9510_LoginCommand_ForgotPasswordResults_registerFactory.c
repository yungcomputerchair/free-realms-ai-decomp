// addr: 0x014b9510
// name: LoginCommand_ForgotPasswordResults_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_ForgotPasswordResults_registerFactory(void) */

void LoginCommand_ForgotPasswordResults_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LoginCommand_ForgotPasswordResults component factory under type
                       id 0x1b3. The wrapper passes factory thunk 014b94b0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014b90f0, whose body installs
                       LoginCommand_ForgotPasswordResults::vftable. */
  factoryFn = LoginCommand_ForgotPasswordResults_create;
  typeId_ = 0x1b3;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

