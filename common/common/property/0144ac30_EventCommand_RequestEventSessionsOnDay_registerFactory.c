// addr: 0x0144ac30
// name: EventCommand_RequestEventSessionsOnDay_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RequestEventSessionsOnDay_registerFactory(void) */

void EventCommand_RequestEventSessionsOnDay_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the EventCommand_RequestEventSessionsOnDay component factory for id
                       0x216 by passing its allocator thunk to ComponentFactory_initSingleton and
                       the secondary registration helper. */
  factoryFn = EventCommand_RequestEventSessionsOnDay_create;
  typeId_ = 0x216;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

