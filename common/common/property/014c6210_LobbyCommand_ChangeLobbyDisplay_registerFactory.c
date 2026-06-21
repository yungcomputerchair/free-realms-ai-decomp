// addr: 0x014c6210
// name: LobbyCommand_ChangeLobbyDisplay_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_ChangeLobbyDisplay_registerFactory(void) */

void LobbyCommand_ChangeLobbyDisplay_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_ChangeLobbyDisplay component factory under type id
                       0x123. The wrapper passes factory thunk 014c61b0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c5e60, whose body installs
                       LobbyCommand_ChangeLobbyDisplay::vftable. */
  factoryFn = FUN_014c61b0;
  typeId_ = 0x123;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

