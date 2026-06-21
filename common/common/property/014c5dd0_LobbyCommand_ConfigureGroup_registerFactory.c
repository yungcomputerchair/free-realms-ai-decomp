// addr: 0x014c5dd0
// name: LobbyCommand_ConfigureGroup_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_ConfigureGroup_registerFactory(void) */

void LobbyCommand_ConfigureGroup_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_ConfigureGroup component factory under type id
                       0x60. The wrapper passes factory thunk 014c5d70 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c5830, whose body installs
                       LobbyCommand_ConfigureGroup::vftable. */
  factoryFn = FUN_014c5d70;
  typeId_ = 0x60;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

