// addr: 0x014b3a80
// name: MatchCommand_SetMatchState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_SetMatchState_registerFactory(void) */

void MatchCommand_SetMatchState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers MatchCommand_SetMatchState with the component factory under
                       command/type id 0x7c, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = MatchCommand_SetMatchState_create;
  typeId_ = 0x7c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

