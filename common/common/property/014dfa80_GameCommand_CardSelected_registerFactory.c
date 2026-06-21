// addr: 0x014dfa80
// name: GameCommand_CardSelected_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_CardSelected_registerFactory(void) */

void GameCommand_CardSelected_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x3c with the component factory using the allocator thunk
                       for GameCommand_CardSelected. */
  factoryFn = GameCommand_CardSelected_create;
  typeId_ = 0x3c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

