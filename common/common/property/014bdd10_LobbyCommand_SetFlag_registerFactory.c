// addr: 0x014bdd10
// name: LobbyCommand_SetFlag_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SetFlag_registerFactory(void) */

void LobbyCommand_SetFlag_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SetFlag component factory under type id 0x16c. The
                       wrapper passes factory thunk 014bdcb0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bd9d0, whose body installs
                       LobbyCommand_SetFlag::vftable. */
  factoryFn = FUN_014bdcb0;
  typeId_ = 0x16c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

