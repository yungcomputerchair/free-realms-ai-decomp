// addr: 0x014c2c40
// name: LobbyCommand_RemoveAdjournedGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_RemoveAdjournedGame_registerFactory(void) */

void LobbyCommand_RemoveAdjournedGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_RemoveAdjournedGame component factory under type
                       id 0xa4. The wrapper passes factory thunk 014c2be0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c28c0, whose body installs
                       LobbyCommand_RemoveAdjournedGame::vftable. */
  factoryFn = FUN_014c2be0;
  typeId_ = 0xa4;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

