// addr: 0x014bf4e0
// name: LobbyCommand_SetDraft_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SetDraft_registerFactory(void) */

void LobbyCommand_SetDraft_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SetDraft component factory under type id 0x12f.
                       The wrapper passes factory thunk 014bf480 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bf310, whose body installs
                       LobbyCommand_SetDraft::vftable. */
  factoryFn = FUN_014bf480;
  typeId_ = 0x12f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

