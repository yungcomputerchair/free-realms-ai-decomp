// addr: 0x014c3720
// name: LobbyCommand_NotifyOfBuddy_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_NotifyOfBuddy_registerFactory(void) */

void LobbyCommand_NotifyOfBuddy_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_NotifyOfBuddy component factory under type id
                       0x121. The wrapper passes factory thunk 014c36c0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c3310, whose body installs
                       LobbyCommand_NotifyOfBuddy::vftable. */
  factoryFn = FUN_014c36c0;
  typeId_ = 0x121;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

