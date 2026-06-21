// addr: 0x014d8d70
// name: GameCommand_SetPlayer_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_SetPlayer_registerFactory(void) */

void GameCommand_SetPlayer_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x41 with the component factory using allocator thunk
                       014d8d10. The thunk constructs an instance whose constructor installs
                       GameCommand_SetPlayer::vftable. */
  factoryFn = GameCommand_SetPlayer_create;
  typeId_ = 0x41;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

