// addr: 0x014250b0
// name: GameCommand_DrawCards_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_DrawCards_registerFactory(void) */

void GameCommand_DrawCards_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_DrawCards with the component/packet factory under type
                       id 0x44. The registered maker allocates the class and calls the constructor
                       for that vtable-backed type. */
  factoryFn = GameCommand_DrawCards_create;
  typeId_ = 0x44;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

