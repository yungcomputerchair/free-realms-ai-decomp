// addr: 0x014bccf0
// name: LobbyCommand_SetLeagueInfo_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SetLeagueInfo_registerFactory(void) */

void LobbyCommand_SetLeagueInfo_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SetLeagueInfo component factory under type id
                       0x150. The wrapper passes factory thunk 014bcc90 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bc880, whose body installs
                       LobbyCommand_SetLeagueInfo::vftable. */
  factoryFn = FUN_014bcc90;
  typeId_ = 0x150;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

