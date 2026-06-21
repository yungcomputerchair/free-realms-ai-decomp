// addr: 0x014d9ec0
// name: GameCommand_RevealCards_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_RevealCards_registerFactory(void) */

void GameCommand_RevealCards_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x80 with the component factory using allocator thunk
                       014d9e60. The thunk constructs an instance whose constructor installs
                       GameCommand_RevealCards::vftable. */
  factoryFn = GameCommand_RevealCards_create;
  typeId_ = 0x80;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

