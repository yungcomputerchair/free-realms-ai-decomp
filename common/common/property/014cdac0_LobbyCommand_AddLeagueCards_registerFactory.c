// addr: 0x014cdac0
// name: LobbyCommand_AddLeagueCards_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_AddLeagueCards_registerFactory(void) */

void LobbyCommand_AddLeagueCards_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_AddLeagueCards component factory under type id
                       0x15b. The wrapper passes factory thunk 014cda60 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014cd920, whose body installs
                       LobbyCommand_AddLeagueCards::vftable. */
  factoryFn = LobbyCommand_AddLeagueCards_create;
  typeId_ = 0x15b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

