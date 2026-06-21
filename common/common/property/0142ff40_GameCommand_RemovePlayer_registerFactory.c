// addr: 0x0142ff40
// name: GameCommand_RemovePlayer_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_RemovePlayer_registerFactory(void) */

void GameCommand_RemovePlayer_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_RemovePlayer with the component/packet factory under
                       type id 0x10b. The registered maker allocates the class and calls the
                       constructor for that vtable-backed type. */
  factoryFn = GameCommand_RemovePlayer_create;
  typeId_ = 0x10b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

