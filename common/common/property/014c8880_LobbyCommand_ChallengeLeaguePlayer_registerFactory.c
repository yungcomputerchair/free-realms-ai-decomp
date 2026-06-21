// addr: 0x014c8880
// name: LobbyCommand_ChallengeLeaguePlayer_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_ChallengeLeaguePlayer_registerFactory(void) */

void LobbyCommand_ChallengeLeaguePlayer_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_ChallengeLeaguePlayer component factory under type
                       id 0x152. The wrapper passes factory thunk 014c8820 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c8420, whose body installs
                       LobbyCommand_ChallengeLeaguePlayer::vftable. */
  factoryFn = FUN_014c8820;
  typeId_ = 0x152;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

