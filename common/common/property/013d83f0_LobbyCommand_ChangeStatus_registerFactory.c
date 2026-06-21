// addr: 0x013d83f0
// name: LobbyCommand_ChangeStatus_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_ChangeStatus_registerFactory(void) */

void LobbyCommand_ChangeStatus_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_ChangeStatus command factory. The registered
                       constructor sets LobbyCommand_ChangeStatus::vftable. */
  factoryFn = FUN_013d8390;
  typeId_ = 0x89;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

