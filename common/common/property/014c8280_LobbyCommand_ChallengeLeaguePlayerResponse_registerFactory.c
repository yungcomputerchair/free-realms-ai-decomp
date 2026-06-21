// addr: 0x014c8280
// name: LobbyCommand_ChallengeLeaguePlayerResponse_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_ChallengeLeaguePlayerResponse_registerFactory(void) */

void LobbyCommand_ChallengeLeaguePlayerResponse_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_ChallengeLeaguePlayerResponse component factory
                       under type id 0x153. The wrapper passes factory thunk 014c8220 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c8040, whose body installs
                       LobbyCommand_ChallengeLeaguePlayerResponse::vftable. */
  factoryFn = FUN_014c8220;
  typeId_ = 0x153;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

