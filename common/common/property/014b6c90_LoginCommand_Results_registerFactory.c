// addr: 0x014b6c90
// name: LoginCommand_Results_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_Results_registerFactory(void) */

void LoginCommand_Results_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers LoginCommand_Results with the component factory under command/type
                       id 0x51, pairing the id with its allocator and then finalizing the
                       registration. */
  factoryFn = LoginCommand_Results_create;
  typeId_ = 0x51;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

