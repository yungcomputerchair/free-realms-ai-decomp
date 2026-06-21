// addr: 0x014dc4c0
// name: GameCommand_LostPlayer_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_LostPlayer_registerFactory(void) */

void GameCommand_LostPlayer_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x8b with the component factory using allocator thunk
                       014dc460. The thunk constructs an instance whose constructor installs
                       GameCommand_LostPlayer::vftable. */
  factoryFn = GameCommand_LostPlayer_create;
  typeId_ = 0x8b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

