// addr: 0x014bff00
// name: LobbyCommand_SendPing_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SendPing_registerFactory(void) */

void LobbyCommand_SendPing_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SendPing component factory under type id 0x118.
                       The wrapper passes factory thunk 014bfea0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bfb10, whose body installs
                       LobbyCommand_SendPing::vftable. */
  factoryFn = FUN_014bfea0;
  typeId_ = 0x118;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

