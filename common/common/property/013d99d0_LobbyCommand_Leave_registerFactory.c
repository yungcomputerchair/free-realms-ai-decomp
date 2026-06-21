// addr: 0x013d99d0
// name: LobbyCommand_Leave_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_Leave_registerFactory(void) */

void LobbyCommand_Leave_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_Leave command factory. The registered constructor
                       path initializes LobbyCommand_Leave::vftable and leave command fields. */
  factoryFn = FUN_013d9970;
  typeId_ = 0x5d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

