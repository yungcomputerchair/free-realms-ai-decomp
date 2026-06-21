// addr: 0x014b9ef0
// name: LoginCommand_DisplayMOTD_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_DisplayMOTD_registerFactory(void) */

void LoginCommand_DisplayMOTD_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LoginCommand_DisplayMOTD component factory under type id 0x135.
                       The wrapper passes factory thunk 014b9e90 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014b9cb0, whose body installs
                       LoginCommand_DisplayMOTD::vftable. */
  factoryFn = LoginCommand_DisplayMOTD_create;
  typeId_ = 0x135;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

