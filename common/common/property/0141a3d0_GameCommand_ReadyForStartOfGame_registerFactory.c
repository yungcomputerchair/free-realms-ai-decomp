// addr: 0x0141a3d0
// name: GameCommand_ReadyForStartOfGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_ReadyForStartOfGame_registerFactory(void) */

void GameCommand_ReadyForStartOfGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_ReadyForStartOfGame with the component/packet factory
                       under type id 0x75. The registered maker allocates the class and calls the
                       constructor for that vtable-backed type. */
  factoryFn = GameCommand_ReadyForStartOfGame_create;
  typeId_ = 0x75;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

