// addr: 0x014e0600
// name: GameCommand_CardDeSelected_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_CardDeSelected_registerFactory(void) */

void GameCommand_CardDeSelected_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x3d with the component factory using the allocator thunk
                       for GameCommand_CardDeSelected. */
  factoryFn = GameCommand_CardDeSelected_create;
  typeId_ = 0x3d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

