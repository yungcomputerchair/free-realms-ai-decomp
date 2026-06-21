// addr: 0x014c4390
// name: LobbyCommand_GameServiceError_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_GameServiceError_registerFactory(void) */

void LobbyCommand_GameServiceError_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_GameServiceError component factory under type id
                       0x8a. The wrapper passes factory thunk 014c4330 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c4170, whose body installs
                       LobbyCommand_GameServiceError::vftable. */
  factoryFn = FUN_014c4330;
  typeId_ = 0x8a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

