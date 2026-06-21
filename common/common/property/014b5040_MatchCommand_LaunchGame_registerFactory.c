// addr: 0x014b5040
// name: MatchCommand_LaunchGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_LaunchGame_registerFactory(void) */

void MatchCommand_LaunchGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers MatchCommand_LaunchGame with the component factory under
                       command/type id 0x74, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = MatchCommand_LaunchGame_create;
  typeId_ = 0x74;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

