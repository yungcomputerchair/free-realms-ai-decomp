// addr: 0x01431510
// name: GameCommand_ConcedeGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_ConcedeGame_registerFactory(void) */

void GameCommand_ConcedeGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_ConcedeGame with the component/packet factory under
                       type id 0xa0. The registered maker allocates the class and calls the
                       constructor for that vtable-backed type. */
  factoryFn = GameCommand_ConcedeGame_create;
  typeId_ = 0xa0;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

