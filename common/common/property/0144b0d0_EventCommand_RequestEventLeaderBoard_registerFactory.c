// addr: 0x0144b0d0
// name: EventCommand_RequestEventLeaderBoard_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RequestEventLeaderBoard_registerFactory(void) */

void EventCommand_RequestEventLeaderBoard_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the EventCommand_RequestEventLeaderBoard component factory for id
                       0x203 by passing its allocator thunk to ComponentFactory_initSingleton and
                       the secondary registration helper. */
  factoryFn = EventCommand_RequestEventLeaderBoard_create;
  typeId_ = 0x203;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

