// addr: 0x014b9950
// name: LoginCommand_ForgotPassword_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_ForgotPassword_registerFactory(void) */

void LoginCommand_ForgotPassword_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LoginCommand_ForgotPassword component factory under type id
                       0x1b2. The wrapper passes factory thunk 014b98f0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014b9730, whose body installs
                       LoginCommand_ForgotPassword::vftable. */
  factoryFn = LoginCommand_ForgotPassword_create;
  typeId_ = 0x1b2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

