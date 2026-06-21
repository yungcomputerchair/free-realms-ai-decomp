// addr: 0x014e1220
// name: GameCommand_ButtonPressed_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_ButtonPressed_registerFactory(void) */

void GameCommand_ButtonPressed_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x3e with the component factory using the allocator thunk
                       for GameCommand_ButtonPressed. */
  factoryFn = GameCommand_ButtonPressed_create;
  typeId_ = 0x3e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

