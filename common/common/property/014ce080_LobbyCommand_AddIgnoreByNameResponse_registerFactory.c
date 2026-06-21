// addr: 0x014ce080
// name: LobbyCommand_AddIgnoreByNameResponse_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_AddIgnoreByNameResponse_registerFactory(void) */

void LobbyCommand_AddIgnoreByNameResponse_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_AddIgnoreByNameResponse component factory under
                       type id 0x11e. The wrapper passes factory thunk 014ce020 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014cde30, whose body installs
                       LobbyCommand_AddIgnoreByNameResponse::vftable. */
  factoryFn = LobbyCommand_AddIgnoreByNameResponse_create;
  typeId_ = 0x11e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

