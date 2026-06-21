// addr: 0x01430570
// name: GameCommand_SelectDeckForPlayer_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_SelectDeckForPlayer_registerFactory(void) */

void GameCommand_SelectDeckForPlayer_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_SelectDeckForPlayer with the component/packet factory
                       under type id 0x3a. The registered maker allocates the class and calls the
                       constructor for that vtable-backed type. */
  factoryFn = GameCommand_SelectDeckForPlayer_create;
  typeId_ = 0x3a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

