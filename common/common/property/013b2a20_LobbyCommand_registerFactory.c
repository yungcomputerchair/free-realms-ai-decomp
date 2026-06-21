// addr: 0x013b2a20
// name: LobbyCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_registerFactory(void) */

void LobbyCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand factory callback. The callback allocates 8 bytes
                       and calls LobbyCommand_ctor. */
  factoryFn = LobbyCommand_create;
  typeId_ = 0x5b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

