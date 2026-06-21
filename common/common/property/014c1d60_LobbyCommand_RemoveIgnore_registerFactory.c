// addr: 0x014c1d60
// name: LobbyCommand_RemoveIgnore_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_RemoveIgnore_registerFactory(void) */

void LobbyCommand_RemoveIgnore_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_RemoveIgnore component factory under type id 0x6f.
                       The wrapper passes factory thunk 014c1d00 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c1bc0, whose body installs
                       LobbyCommand_RemoveIgnore::vftable. */
  factoryFn = FUN_014c1d00;
  typeId_ = 0x6f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

