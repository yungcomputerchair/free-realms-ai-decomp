// addr: 0x01535570
// name: EventCommand_NextMatchingTime_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_NextMatchingTime_registerFactory(void) */

void EventCommand_NextMatchingTime_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_NextMatchingTime. The
                       registered thunk allocates and initializes the two-field event command. */
  factoryFn = EventCommand_NextMatchingTime_create;
  typeId_ = 0x202;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

