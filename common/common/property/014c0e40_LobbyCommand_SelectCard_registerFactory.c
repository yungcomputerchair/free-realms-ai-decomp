// addr: 0x014c0e40
// name: LobbyCommand_SelectCard_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SelectCard_registerFactory(void) */

void LobbyCommand_SelectCard_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SelectCard component factory under type id 0x130.
                       The wrapper passes factory thunk 014c0de0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c0c90, whose body installs
                       LobbyCommand_SelectCard::vftable. */
  factoryFn = FUN_014c0de0;
  typeId_ = 0x130;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

