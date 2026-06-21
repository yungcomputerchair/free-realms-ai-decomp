// addr: 0x0142f790
// name: LobbyCommand_InfoEnumMessage_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_InfoEnumMessage_registerFactory(void) */

void LobbyCommand_InfoEnumMessage_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers LobbyCommand_InfoEnumMessage with the component/packet factory
                       under type id 0x128. The registered maker allocates the class and calls the
                       constructor for that vtable-backed type. */
  factoryFn = FUN_0142f730;
  typeId_ = 0x128;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

