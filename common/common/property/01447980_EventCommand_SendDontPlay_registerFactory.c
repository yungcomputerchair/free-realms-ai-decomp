// addr: 0x01447980
// name: EventCommand_SendDontPlay_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_SendDontPlay_registerFactory(void) */

void EventCommand_SendDontPlay_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the EventCommand_SendDontPlay component factory for id 0x20a by
                       passing its allocator thunk to ComponentFactory_initSingleton and the
                       secondary registration helper. */
  factoryFn = EventCommand_SendDontPlay_create;
  typeId_ = 0x20a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

