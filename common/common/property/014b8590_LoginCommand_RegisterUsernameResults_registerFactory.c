// addr: 0x014b8590
// name: LoginCommand_RegisterUsernameResults_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_RegisterUsernameResults_registerFactory(void) */

void LoginCommand_RegisterUsernameResults_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers LoginCommand_RegisterUsernameResults with the component factory
                       under command/type id 0x199, pairing the id with its allocator and then
                       finalizing the registration. */
  factoryFn = LoginCommand_RegisterUsernameResults_create;
  typeId_ = 0x199;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

