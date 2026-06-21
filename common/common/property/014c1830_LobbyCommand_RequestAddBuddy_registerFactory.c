// addr: 0x014c1830
// name: LobbyCommand_RequestAddBuddy_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_RequestAddBuddy_registerFactory(void) */

void LobbyCommand_RequestAddBuddy_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_RequestAddBuddy component factory under type id
                       0x11b. The wrapper passes factory thunk 014c17d0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c14a0, whose body installs
                       LobbyCommand_RequestAddBuddy::vftable. */
  factoryFn = FUN_014c17d0;
  typeId_ = 0x11b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

