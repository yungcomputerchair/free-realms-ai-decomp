// addr: 0x0144a7f0
// name: EventCommand_RequestCurrentSessionInfo_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RequestCurrentSessionInfo_registerFactory(void) */

void EventCommand_RequestCurrentSessionInfo_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the EventCommand_RequestCurrentSessionInfo component factory for id
                       0x214 by passing its allocator thunk to ComponentFactory_initSingleton and
                       the secondary registration helper. */
  factoryFn = EventCommand_RequestCurrentSessionInfo_create;
  typeId_ = 0x214;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

