// addr: 0x014b8150
// name: LoginCommand_RespondToChallenge_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_RespondToChallenge_registerFactory(void) */

void LoginCommand_RespondToChallenge_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers LoginCommand_RespondToChallenge with the component factory under
                       command/type id 0x50, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = LoginCommand_RespondToChallenge_create;
  typeId_ = 0x50;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

