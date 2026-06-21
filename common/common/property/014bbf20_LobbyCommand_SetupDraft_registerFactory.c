// addr: 0x014bbf20
// name: LobbyCommand_SetupDraft_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SetupDraft_registerFactory(void) */

void LobbyCommand_SetupDraft_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SetupDraft component factory under type id 0x132.
                       The wrapper passes factory thunk 014bbec0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bbbb0, whose body installs
                       LobbyCommand_SetupDraft::vftable. */
  factoryFn = FUN_014bbec0;
  typeId_ = 0x132;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

