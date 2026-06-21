// addr: 0x014bc3b0
// name: LobbyCommand_SetTournament_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SetTournament_registerFactory(void) */

void LobbyCommand_SetTournament_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SetTournament component factory under type id 299.
                       The wrapper passes factory thunk 014bc350 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bbfe0, whose body installs
                       LobbyCommand_SetTournament::vftable. */
  factoryFn = FUN_014bc350;
  typeId_ = 299;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

