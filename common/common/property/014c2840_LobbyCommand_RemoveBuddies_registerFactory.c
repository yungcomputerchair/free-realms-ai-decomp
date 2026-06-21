// addr: 0x014c2840
// name: LobbyCommand_RemoveBuddies_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_RemoveBuddies_registerFactory(void) */

void LobbyCommand_RemoveBuddies_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_RemoveBuddies component factory under type id
                       0x6d. The wrapper passes factory thunk 014c27e0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c26a0, whose body installs
                       LobbyCommand_RemoveBuddies::vftable. */
  factoryFn = FUN_014c27e0;
  typeId_ = 0x6d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

