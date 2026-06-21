// addr: 0x01431050
// name: GameCommand_AcceptAdjournment_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_AcceptAdjournment_registerFactory(void) */

void GameCommand_AcceptAdjournment_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GameCommand_AcceptAdjournment with the component/packet factory
                       under type id 0x107. The registered maker allocates the class and calls the
                       constructor for that vtable-backed type. */
  factoryFn = GameCommand_AcceptAdjournment_create;
  typeId_ = 0x107;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

