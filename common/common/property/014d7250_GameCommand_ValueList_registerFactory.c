// addr: 0x014d7250
// name: GameCommand_ValueList_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_ValueList_registerFactory(void) */

void GameCommand_ValueList_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x140 with the component factory using allocator thunk
                       014d71f0. The thunk constructs an instance whose constructor installs
                       GameCommand_ValueList::vftable. */
  factoryFn = GameCommand_ValueList_create;
  typeId_ = 0x140;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

