// addr: 0x014e1700
// name: GameCommand_BeginCardPlayed_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_BeginCardPlayed_registerFactory(void) */

void GameCommand_BeginCardPlayed_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x46 with the component factory using the allocator thunk
                       for GameCommand_BeginCardPlayed. */
  factoryFn = GameCommand_BeginCardPlayed_create;
  typeId_ = 0x46;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

