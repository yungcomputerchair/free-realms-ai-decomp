// addr: 0x014b35f0
// name: MatchCommand_SetTimer_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_SetTimer_registerFactory(void) */

void MatchCommand_SetTimer_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers MatchCommand_SetTimer with the component factory under command/type
                       id 0x127, pairing the id with its allocator and then finalizing the
                       registration. */
  factoryFn = MatchCommand_SetTimer_create;
  typeId_ = 0x127;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

