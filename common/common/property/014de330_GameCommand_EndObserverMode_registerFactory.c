// addr: 0x014de330
// name: GameCommand_EndObserverMode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_EndObserverMode_registerFactory(void) */

void GameCommand_EndObserverMode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x8c with the component factory using the allocator thunk
                       for GameCommand_EndObserverMode. */
  factoryFn = GameCommand_EndObserverMode_create;
  typeId_ = 0x8c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

