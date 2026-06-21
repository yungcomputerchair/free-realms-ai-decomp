// addr: 0x01430b70
// name: GameCommand_AcceptDraw_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_AcceptDraw_registerFactory(void) */

void GameCommand_AcceptDraw_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_AcceptDraw with the component/packet factory under type
                       id 0xa1. The registered maker allocates the class and calls the constructor
                       for that vtable-backed type. */
  factoryFn = GameCommand_AcceptDraw_create;
  typeId_ = 0xa1;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

