// addr: 0x013b49f0
// name: LobbyCommand_SendUChatText_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SendUChatText_registerFactory(void) */

void LobbyCommand_SendUChatText_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory callback for LobbyCommand_SendUChatText. The callback
                       allocates 0x98 bytes and constructs the command. */
  factoryFn = FUN_013b4980;
  typeId_ = 0x1be;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

