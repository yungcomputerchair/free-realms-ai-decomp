// addr: 0x01446df0
// name: EventCommand_RequestJoinMatchingQueue_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RequestJoinMatchingQueue_registerFactory(void) */

void EventCommand_RequestJoinMatchingQueue_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the EventCommand_RequestJoinMatchingQueue component factory for id
                       0x23a by passing its allocator thunk to ComponentFactory_initSingleton and
                       the secondary registration helper. */
  factoryFn = FUN_01446d90;
  typeId_ = 0x23a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

