// addr: 0x014bf9e0
// name: LobbyCommand_SendUChatError_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_SendUChatError_registerFactory(void) */

void LobbyCommand_SendUChatError_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_SendUChatError component factory under type id
                       0x1bd. The wrapper passes factory thunk 014bf980 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014bf630, whose body installs
                       LobbyCommand_SendUChatError::vftable. */
  factoryFn = FUN_014bf980;
  typeId_ = 0x1bd;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

