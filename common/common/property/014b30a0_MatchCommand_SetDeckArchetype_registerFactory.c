// addr: 0x014b30a0
// name: MatchCommand_SetDeckArchetype_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_SetDeckArchetype_registerFactory(void) */

void MatchCommand_SetDeckArchetype_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers MatchCommand_SetDeckArchetype with the component factory under
                       command/type id 0x1d6, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = MatchCommand_SetDeckArchetype_create;
  typeId_ = 0x1d6;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

