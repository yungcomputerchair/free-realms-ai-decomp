// addr: 0x0144b4a0
// name: EventCommand_RequestEventSessionInfo_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RequestEventSessionInfo_registerFactory(void) */

void EventCommand_RequestEventSessionInfo_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the EventCommand_RequestEventSessionInfo component factory for id
                       0x204 by passing its allocator thunk to ComponentFactory_initSingleton and
                       the secondary registration helper. */
  factoryFn = EventCommand_RequestEventSessionInfo_create;
  typeId_ = 0x204;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

