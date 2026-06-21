// addr: 0x014e0c90
// name: GameCommand_CanPrevent_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_CanPrevent_registerFactory(void) */

void GameCommand_CanPrevent_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x9e with the component factory using the allocator thunk
                       for GameCommand_CanPrevent. */
  factoryFn = GameCommand_CanPrevent_create;
  typeId_ = 0x9e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

