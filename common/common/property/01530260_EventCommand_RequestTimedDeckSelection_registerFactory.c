// addr: 0x01530260
// name: EventCommand_RequestTimedDeckSelection_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RequestTimedDeckSelection_registerFactory(void) */

void EventCommand_RequestTimedDeckSelection_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_RequestTimedDeckSelection.
                       It associates id 0x209 with the allocation thunk that initializes the request
                       object and string member. */
  factoryFn = EventCommand_RequestTimedDeckSelection_create;
  typeId_ = 0x209;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

