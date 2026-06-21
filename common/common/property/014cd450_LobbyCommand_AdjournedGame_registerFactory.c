// addr: 0x014cd450
// name: LobbyCommand_AdjournedGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_AdjournedGame_registerFactory(void) */

void LobbyCommand_AdjournedGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_AdjournedGame component factory under type id
                       0xa3. The wrapper passes factory thunk 014cd3f0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014cd160, whose body installs
                       LobbyCommand_AdjournedGame::vftable. */
  factoryFn = FUN_014cd3f0;
  typeId_ = 0xa3;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

