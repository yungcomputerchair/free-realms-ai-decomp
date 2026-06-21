// addr: 0x014be6f0
// name: LobbyCommand_SetDraftedCards_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SetDraftedCards_registerFactory(void) */

void LobbyCommand_SetDraftedCards_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SetDraftedCards component factory under type id
                       0x1cf. The wrapper passes factory thunk 014be690 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014be590, whose body installs
                       LobbyCommand_SetDraftedCards::vftable. */
  factoryFn = FUN_014be690;
  typeId_ = 0x1cf;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

