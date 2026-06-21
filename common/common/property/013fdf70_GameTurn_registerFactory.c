// addr: 0x013fdf70
// name: GameTurn_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameTurn_registerFactory(void) */

void GameTurn_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the GameTurn persistent component factory. The registered
                       constructor initializes GameTurn::vftable and default turn text. */
  factoryFn = FUN_013fdf00;
  typeId_ = 0xe8;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

