// addr: 0x014db1b0
// name: GameCommand_PrePassCancel_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_PrePassCancel_registerFactory(void) */

void GameCommand_PrePassCancel_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x146 with the component factory using allocator thunk
                       014db150. The thunk constructs an instance whose constructor installs
                       GameCommand_PrePassCancel::vftable. */
  factoryFn = GameCommand_PrePassCancel_create;
  typeId_ = 0x146;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

