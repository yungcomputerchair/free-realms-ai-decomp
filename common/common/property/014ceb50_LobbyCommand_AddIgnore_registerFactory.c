// addr: 0x014ceb50
// name: LobbyCommand_AddIgnore_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_AddIgnore_registerFactory(void) */

void LobbyCommand_AddIgnore_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_AddIgnore component factory under type id 0x6e.
                       The wrapper passes factory thunk 014ceaf0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014ce9b0, whose body installs
                       LobbyCommand_AddIgnore::vftable. */
  factoryFn = LobbyCommand_AddIgnore_create;
  typeId_ = 0x6e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

