// addr: 0x014b5d60
// name: LoginCommand_SendChallenge_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_SendChallenge_registerFactory(void) */

void LoginCommand_SendChallenge_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers LoginCommand_SendChallenge with the component factory under
                       command/type id 0x4f, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = LoginCommand_SendChallenge_create;
  typeId_ = 0x4f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

