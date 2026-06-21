// addr: 0x014c5810
// name: LobbyCommand_DisplayStats_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_DisplayStats_registerFactory(void) */

void LobbyCommand_DisplayStats_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_DisplayStats component factory under type id
                       0x124. The wrapper passes factory thunk 014c57b0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c55d0, whose body installs
                       LobbyCommand_DisplayStats::vftable. */
  factoryFn = LobbyCommand_DisplayStats_create;
  typeId_ = 0x124;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

