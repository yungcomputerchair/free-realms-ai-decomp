// addr: 0x014dee10
// name: GameCommand_DiscardCard_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_DiscardCard_registerFactory(void) */

void GameCommand_DiscardCard_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x82 with the component factory using the allocator thunk
                       for GameCommand_DiscardCard. */
  factoryFn = GameCommand_DiscardCard_create;
  typeId_ = 0x82;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

