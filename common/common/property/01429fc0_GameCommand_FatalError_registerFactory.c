// addr: 0x01429fc0
// name: GameCommand_FatalError_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_FatalError_registerFactory(void) */

void GameCommand_FatalError_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_FatalError with the component/packet factory under type
                       id 0x84. The registered maker allocates the class and calls the constructor
                       for that vtable-backed type. */
  factoryFn = GameCommand_FatalError_create;
  typeId_ = 0x84;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

