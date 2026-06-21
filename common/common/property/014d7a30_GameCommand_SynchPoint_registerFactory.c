// addr: 0x014d7a30
// name: GameCommand_SynchPoint_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_SynchPoint_registerFactory(void) */

void GameCommand_SynchPoint_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x49 with the component factory using allocator thunk
                       014d79d0. The thunk constructs an instance whose constructor installs
                       GameCommand_SynchPoint::vftable. */
  factoryFn = GameCommand_SynchPoint_create;
  typeId_ = 0x49;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

