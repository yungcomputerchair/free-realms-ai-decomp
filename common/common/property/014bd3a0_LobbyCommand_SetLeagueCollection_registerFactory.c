// addr: 0x014bd3a0
// name: LobbyCommand_SetLeagueCollection_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SetLeagueCollection_registerFactory(void) */

void LobbyCommand_SetLeagueCollection_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SetLeagueCollection component factory under type
                       id 0x15a. The wrapper passes factory thunk 014bd340 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bd200, whose body installs
                       LobbyCommand_SetLeagueCollection::vftable. */
  factoryFn = FUN_014bd340;
  typeId_ = 0x15a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

