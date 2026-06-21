// addr: 0x014be190
// name: LobbyCommand_SetDraftReady_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SetDraftReady_registerFactory(void) */

void LobbyCommand_SetDraftReady_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SetDraftReady component factory under type id
                       0x131. The wrapper passes factory thunk 014be130 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bdde0, whose body installs
                       LobbyCommand_SetDraftReady::vftable. */
  factoryFn = FUN_014be130;
  typeId_ = 0x131;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

