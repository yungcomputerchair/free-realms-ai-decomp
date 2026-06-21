// addr: 0x015350e0
// name: EventCommand_NotifyMatchEnded_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_NotifyMatchEnded_registerFactory(void) */

void EventCommand_NotifyMatchEnded_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_NotifyMatchEnded. It
                       associates id 0x213 with the allocator/constructor thunk. */
  factoryFn = EventCommand_NotifyMatchEnded_create;
  typeId_ = 0x213;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

