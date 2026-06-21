// addr: 0x014c3e70
// name: LobbyCommand_JoinLeague_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_JoinLeague_registerFactory(void) */

void LobbyCommand_JoinLeague_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_JoinLeague component factory under type id 0x154.
                       The wrapper passes factory thunk 014c3e10 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c3be0, whose body installs
                       LobbyCommand_JoinLeague::vftable. */
  factoryFn = LobbyCommand_JoinLeague_create;
  typeId_ = 0x154;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

