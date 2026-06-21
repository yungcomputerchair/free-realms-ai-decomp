// addr: 0x014bb8c0
// name: LobbyCommand_StartTournamentRound_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_StartTournamentRound_registerFactory(void) */

void LobbyCommand_StartTournamentRound_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_StartTournamentRound component factory under type
                       id 300. The wrapper passes factory thunk 014bb860 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bb4f0, whose body installs
                       LobbyCommand_StartTournamentRound::vftable. */
  factoryFn = FUN_014bb860;
  typeId_ = 300;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

