// addr: 0x014cf3c0
// name: LobbyCommand_AddBooster_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_AddBooster_registerFactory(void) */

void LobbyCommand_AddBooster_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_AddBooster component factory under type id 0x156.
                       The wrapper passes factory thunk 014cf360 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014cf050, whose body installs
                       LobbyCommand_AddBooster::vftable. */
  factoryFn = LobbyCommand_AddBooster_create;
  typeId_ = 0x156;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

