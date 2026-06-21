// addr: 0x013b41f0
// name: LobbyCommand_SendText_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SendText_registerFactory(void) */

void LobbyCommand_SendText_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory callback for LobbyCommand_SendText. The callback
                       allocates 0x38 bytes and constructs the command. */
  factoryFn = FUN_013b4190;
  typeId_ = 0x61;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

