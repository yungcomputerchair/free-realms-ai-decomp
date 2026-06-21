// addr: 0x014c23b0
// name: LobbyCommand_RemoveGroups_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_RemoveGroups_registerFactory(void) */

void LobbyCommand_RemoveGroups_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_RemoveGroups component factory under type id 0x5f.
                       The wrapper passes factory thunk 014c2350 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c2210, whose body installs
                       LobbyCommand_RemoveGroups::vftable. */
  factoryFn = FUN_014c2350;
  typeId_ = 0x5f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

