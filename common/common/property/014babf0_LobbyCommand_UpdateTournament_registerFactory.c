// addr: 0x014babf0
// name: LobbyCommand_UpdateTournament_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_UpdateTournament_registerFactory(void) */

void LobbyCommand_UpdateTournament_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_UpdateTournament component factory under type id
                       0x125. The wrapper passes factory thunk 014bab90 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014baa40, whose body installs
                       LobbyCommand_UpdateTournament::vftable. */
  factoryFn = FUN_014bab90;
  typeId_ = 0x125;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

