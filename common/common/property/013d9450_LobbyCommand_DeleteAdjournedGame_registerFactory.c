// addr: 0x013d9450
// name: LobbyCommand_DeleteAdjournedGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_DeleteAdjournedGame_registerFactory(void) */

void LobbyCommand_DeleteAdjournedGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_DeleteAdjournedGame command factory. The
                       registered constructor initializes LobbyCommand_DeleteAdjournedGame::vftable
                       and fields. */
  factoryFn = FUN_013d93f0;
  typeId_ = 0x160;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

