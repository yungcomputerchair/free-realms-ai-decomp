// addr: 0x014b5510
// name: MatchCommand_InitiateChallenge_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_InitiateChallenge_registerFactory(void) */

void MatchCommand_InitiateChallenge_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers MatchCommand_InitiateChallenge with the component factory under
                       command/type id 0x1e6, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = MatchCommand_InitiateChallenge_create;
  typeId_ = 0x1e6;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

