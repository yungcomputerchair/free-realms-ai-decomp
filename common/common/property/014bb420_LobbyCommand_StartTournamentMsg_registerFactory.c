// addr: 0x014bb420
// name: LobbyCommand_StartTournamentMsg_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_StartTournamentMsg_registerFactory(void) */

void LobbyCommand_StartTournamentMsg_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_StartTournamentMsg component factory under type id
                       0x1cc. The wrapper passes factory thunk 014bb3c0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bb070, whose body installs
                       LobbyCommand_StartTournamentMsg::vftable. */
  factoryFn = FUN_014bb3c0;
  typeId_ = 0x1cc;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

