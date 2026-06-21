// addr: 0x01535dc0
// name: EventCommand_ForceIntoEvent_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_ForceIntoEvent_registerFactory(void) */

void EventCommand_ForceIntoEvent_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_ForceIntoEvent. It
                       associates id 0x20c with the allocator/constructor thunk. */
  factoryFn = EventCommand_ForceIntoEvent_create;
  typeId_ = 0x20c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

