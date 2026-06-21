// addr: 0x013d8940
// name: LobbyCommand_AcceptAdjournedGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_AcceptAdjournedGame_registerFactory(void) */

void LobbyCommand_AcceptAdjournedGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_AcceptAdjournedGame command factory. The
                       registered constructor initializes LobbyCommand_AcceptAdjournedGame::vftable
                       and fields. */
  factoryFn = FUN_013d88e0;
  typeId_ = 0x10a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

