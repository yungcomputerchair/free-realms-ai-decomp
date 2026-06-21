// addr: 0x014cefd0
// name: LobbyCommand_AddBuddies_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_AddBuddies_registerFactory(void) */

void LobbyCommand_AddBuddies_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_AddBuddies component factory under type id 0x6c.
                       The wrapper passes factory thunk 014cef70 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014cee30, whose body installs
                       LobbyCommand_AddBuddies::vftable. */
  factoryFn = LobbyCommand_AddBuddies_create;
  typeId_ = 0x6c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

