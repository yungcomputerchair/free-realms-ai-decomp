// addr: 0x014da530
// name: GameCommand_Reshuffle_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_Reshuffle_registerFactory(void) */

void GameCommand_Reshuffle_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x134 with the component factory using allocator thunk
                       014da4d0. The thunk constructs an instance whose constructor installs
                       GameCommand_Reshuffle::vftable. */
  factoryFn = GameCommand_Reshuffle_create;
  typeId_ = 0x134;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

