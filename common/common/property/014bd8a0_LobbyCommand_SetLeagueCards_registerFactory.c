// addr: 0x014bd8a0
// name: LobbyCommand_SetLeagueCards_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SetLeagueCards_registerFactory(void) */

void LobbyCommand_SetLeagueCards_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SetLeagueCards component factory under type id
                       0x14f. The wrapper passes factory thunk 014bd840 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bd740, whose body installs
                       LobbyCommand_SetLeagueCards::vftable. */
  factoryFn = FUN_014bd840;
  typeId_ = 0x14f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

