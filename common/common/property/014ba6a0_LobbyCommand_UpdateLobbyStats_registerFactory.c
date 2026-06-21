// addr: 0x014ba6a0
// name: LobbyCommand_UpdateLobbyStats_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_UpdateLobbyStats_registerFactory(void) */

void LobbyCommand_UpdateLobbyStats_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_UpdateLobbyStats component factory under type id
                       0x19c. The wrapper passes factory thunk 014ba640 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014ba520, whose body installs
                       LobbyCommand_UpdateLobbyStats::vftable. */
  factoryFn = FUN_014ba640;
  typeId_ = 0x19c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

