// addr: 0x014db5e0
// name: GameCommand_PrePass_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_PrePass_registerFactory(void) */

void GameCommand_PrePass_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x145 with the component factory using allocator thunk
                       014db580. The thunk constructs an instance whose constructor installs
                       GameCommand_PrePass::vftable. */
  factoryFn = GameCommand_PrePass_create;
  typeId_ = 0x145;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

