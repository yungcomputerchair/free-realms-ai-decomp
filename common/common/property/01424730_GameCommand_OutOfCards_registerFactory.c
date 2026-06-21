// addr: 0x01424730
// name: GameCommand_OutOfCards_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_OutOfCards_registerFactory(void) */

void GameCommand_OutOfCards_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_OutOfCards with the component/packet factory under type
                       id 0x45. The registered maker allocates the class and calls the constructor
                       for that vtable-backed type. */
  factoryFn = GameCommand_OutOfCards_create;
  typeId_ = 0x45;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

