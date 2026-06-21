// addr: 0x014c1300
// name: LobbyCommand_RespondAddBuddy_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_RespondAddBuddy_registerFactory(void) */

void LobbyCommand_RespondAddBuddy_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_RespondAddBuddy component factory under type id
                       0x11c. The wrapper passes factory thunk 014c12a0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c0eb0, whose body installs
                       LobbyCommand_RespondAddBuddy::vftable. */
  factoryFn = FUN_014c12a0;
  typeId_ = 0x11c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

