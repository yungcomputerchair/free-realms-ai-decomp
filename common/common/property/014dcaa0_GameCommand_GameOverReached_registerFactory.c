// addr: 0x014dcaa0
// name: GameCommand_GameOverReached_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_GameOverReached_registerFactory(void) */

void GameCommand_GameOverReached_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x17f with the component factory using allocator thunk
                       014dca40. The thunk constructs an instance whose constructor installs
                       GameCommand_GameOverReached::vftable. */
  factoryFn = GameCommand_GameOverReached_create;
  typeId_ = 0x17f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

