// addr: 0x014b4bf0
// name: MatchCommand_SelectStartPosition_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_SelectStartPosition_registerFactory(void) */

void MatchCommand_SelectStartPosition_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers MatchCommand_SelectStartPosition with the component factory under
                       command/type id 0x66, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = MatchCommand_SelectStartPosition_create;
  typeId_ = 0x66;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

