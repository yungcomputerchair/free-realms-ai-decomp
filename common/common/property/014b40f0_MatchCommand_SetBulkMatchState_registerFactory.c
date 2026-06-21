// addr: 0x014b40f0
// name: MatchCommand_SetBulkMatchState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_SetBulkMatchState_registerFactory(void) */

void MatchCommand_SetBulkMatchState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers MatchCommand_SetBulkMatchState with the component factory under
                       command/type id 0x126, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = MatchCommand_SetBulkMatchState_create;
  typeId_ = 0x126;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

