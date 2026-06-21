// addr: 0x014297f0
// name: GameCommand_OutOfSync_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_OutOfSync_registerFactory(void) */

void GameCommand_OutOfSync_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_OutOfSync with the component/packet factory under type
                       id 0x40. The registered maker allocates the class and calls the constructor
                       for that vtable-backed type. */
  factoryFn = GameCommand_OutOfSync_create;
  typeId_ = 0x40;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

