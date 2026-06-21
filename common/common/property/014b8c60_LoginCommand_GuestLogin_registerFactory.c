// addr: 0x014b8c60
// name: LoginCommand_GuestLogin_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_GuestLogin_registerFactory(void) */

void LoginCommand_GuestLogin_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LoginCommand_GuestLogin component factory under type id 0x143.
                       The wrapper passes factory thunk 014b8c00 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014b89e0, whose body installs
                       LoginCommand_GuestLogin::vftable. */
  factoryFn = FUN_014b8c00;
  typeId_ = 0x143;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

