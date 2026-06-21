// addr: 0x014e1c90
// name: GameCommand_BatchControl_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_BatchControl_registerFactory(void) */

void GameCommand_BatchControl_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x48 with the component factory using the allocator thunk
                       for GameCommand_BatchControl. */
  factoryFn = GameCommand_BatchControl_create;
  typeId_ = 0x48;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

