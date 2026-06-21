// addr: 0x014e0140
// name: GameCommand_CardPlayed_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_CardPlayed_registerFactory(void) */

void GameCommand_CardPlayed_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x39 with the component factory using the allocator thunk
                       for GameCommand_CardPlayed. */
  factoryFn = GameCommand_CardPlayed_create;
  typeId_ = 0x39;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

