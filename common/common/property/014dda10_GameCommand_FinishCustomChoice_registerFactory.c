// addr: 0x014dda10
// name: GameCommand_FinishCustomChoice_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_FinishCustomChoice_registerFactory(void) */

void GameCommand_FinishCustomChoice_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x13a with the component factory using the allocator thunk
                       for GameCommand_FinishCustomChoice. */
  factoryFn = GameCommand_FinishCustomChoice_create;
  typeId_ = 0x13a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

