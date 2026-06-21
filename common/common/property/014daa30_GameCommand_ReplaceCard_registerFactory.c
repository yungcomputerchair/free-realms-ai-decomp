// addr: 0x014daa30
// name: GameCommand_ReplaceCard_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_ReplaceCard_registerFactory(void) */

void GameCommand_ReplaceCard_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x90 with the component factory using allocator thunk
                       014da9d0. The thunk constructs an instance whose constructor installs
                       GameCommand_ReplaceCard::vftable. */
  factoryFn = GameCommand_ReplaceCard_create;
  typeId_ = 0x90;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

