// addr: 0x014ce5d0
// name: LobbyCommand_AddIgnoreByName_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_AddIgnoreByName_registerFactory(void) */

void LobbyCommand_AddIgnoreByName_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_AddIgnoreByName component factory under type id
                       0x11d. The wrapper passes factory thunk 014ce570 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014ce3b0, whose body installs
                       LobbyCommand_AddIgnoreByName::vftable. */
  factoryFn = LobbyCommand_AddIgnoreByName_create;
  typeId_ = 0x11d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

