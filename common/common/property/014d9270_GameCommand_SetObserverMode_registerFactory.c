// addr: 0x014d9270
// name: GameCommand_SetObserverMode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_SetObserverMode_registerFactory(void) */

void GameCommand_SetObserverMode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x42 with the component factory using allocator thunk
                       014d9210. The thunk constructs an instance whose constructor installs
                       GameCommand_SetObserverMode::vftable. */
  factoryFn = GameCommand_SetObserverMode_create;
  typeId_ = 0x42;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

