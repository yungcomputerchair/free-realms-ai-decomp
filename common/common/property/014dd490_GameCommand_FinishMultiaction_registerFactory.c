// addr: 0x014dd490
// name: GameCommand_FinishMultiaction_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_FinishMultiaction_registerFactory(void) */

void GameCommand_FinishMultiaction_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0xa5 with the component factory using the allocator thunk
                       for GameCommand_FinishMultiaction. */
  factoryFn = GameCommand_FinishMultiaction_create;
  typeId_ = 0xa5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

