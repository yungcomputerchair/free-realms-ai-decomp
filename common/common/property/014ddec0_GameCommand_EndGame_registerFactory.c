// addr: 0x014ddec0
// name: GameCommand_EndGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_EndGame_registerFactory(void) */

void GameCommand_EndGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1d7 with the component factory using the allocator thunk
                       for GameCommand_EndGame. */
  factoryFn = GameCommand_EndGame_create;
  typeId_ = 0x1d7;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

