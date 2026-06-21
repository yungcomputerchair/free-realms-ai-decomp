// addr: 0x014e26e0
// name: GameCommand_ActionPlayed_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_ActionPlayed_registerFactory(void) */

void GameCommand_ActionPlayed_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x3b with the component factory using the allocator thunk
                       for GameCommand_ActionPlayed. */
  factoryFn = GameCommand_ActionPlayed_create;
  typeId_ = 0x3b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

