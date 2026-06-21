// addr: 0x0141ab90
// name: GameCommand_StateSpecificMessage_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_StateSpecificMessage_registerFactory(void) */

void GameCommand_StateSpecificMessage_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_StateSpecificMessage with the component/packet factory
                       under type id 0x3f. The registered maker allocates the class and calls the
                       constructor for that vtable-backed type. */
  factoryFn = GameCommand_StateSpecificMessage_create;
  typeId_ = 0x3f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

