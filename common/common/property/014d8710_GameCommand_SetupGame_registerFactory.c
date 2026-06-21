// addr: 0x014d8710
// name: GameCommand_SetupGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_SetupGame_registerFactory(void) */

void GameCommand_SetupGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x43 with the component factory using allocator thunk
                       014d86a0. The thunk constructs an instance whose constructor installs
                       GameCommand_SetupGame::vftable. */
  factoryFn = FUN_014d86a0;
  typeId_ = 0x43;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

