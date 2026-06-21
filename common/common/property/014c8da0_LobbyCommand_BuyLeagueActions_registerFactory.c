// addr: 0x014c8da0
// name: LobbyCommand_BuyLeagueActions_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_BuyLeagueActions_registerFactory(void) */

void LobbyCommand_BuyLeagueActions_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_BuyLeagueActions component factory under type id
                       0x157. The wrapper passes factory thunk 014c8d40 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c8b90, whose body installs
                       LobbyCommand_BuyLeagueActions::vftable. */
  factoryFn = FUN_014c8d40;
  typeId_ = 0x157;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

