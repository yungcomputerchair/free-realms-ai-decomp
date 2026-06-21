// addr: 0x0152e8c0
// name: EventCommand_RequestPlayerStats_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RequestPlayerStats_registerFactory(void) */

void EventCommand_RequestPlayerStats_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_RequestPlayerStats. The
                       registered thunk allocates and initializes the class instance. */
  factoryFn = EventCommand_RequestPlayerStats_create;
  typeId_ = 0x20d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

