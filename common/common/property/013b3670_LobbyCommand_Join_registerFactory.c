// addr: 0x013b3670
// name: LobbyCommand_Join_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_Join_registerFactory(void) */

void LobbyCommand_Join_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory callback for LobbyCommand_Join. The callback allocates
                       0x7c bytes and constructs a LobbyCommand_Join object. */
  factoryFn = LobbyCommand_Join_create;
  typeId_ = 0x5c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

