// addr: 0x014d99c0
// name: GameCommand_SendSerializedGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_SendSerializedGame_registerFactory(void) */

void GameCommand_SendSerializedGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x106 with the component factory using allocator thunk
                       014d9960. The thunk constructs an instance whose constructor installs
                       GameCommand_SendSerializedGame::vftable. */
  factoryFn = GameCommand_SendSerializedGame_create;
  typeId_ = 0x106;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

