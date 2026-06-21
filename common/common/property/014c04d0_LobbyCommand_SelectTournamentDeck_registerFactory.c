// addr: 0x014c04d0
// name: LobbyCommand_SelectTournamentDeck_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SelectTournamentDeck_registerFactory(void) */

void LobbyCommand_SelectTournamentDeck_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SelectTournamentDeck component factory under type
                       id 0x133. The wrapper passes factory thunk 014c0470 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c0290, whose body installs
                       LobbyCommand_SelectTournamentDeck::vftable. */
  factoryFn = LobbyCommand_SelectTournamentDeck_create;
  typeId_ = 0x133;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

