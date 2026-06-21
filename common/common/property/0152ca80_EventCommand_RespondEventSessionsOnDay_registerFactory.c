// addr: 0x0152ca80
// name: EventCommand_RespondEventSessionsOnDay_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RespondEventSessionsOnDay_registerFactory(void) */

void EventCommand_RespondEventSessionsOnDay_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_RespondEventSessionsOnDay.
                       The constructor thunk builds an object with the matching vtable and vector
                       fields. */
  factoryFn = EventCommand_RespondEventSessionsOnDay_create;
  typeId_ = 0x217;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

