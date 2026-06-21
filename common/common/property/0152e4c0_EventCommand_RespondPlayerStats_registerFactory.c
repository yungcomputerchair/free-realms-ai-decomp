// addr: 0x0152e4c0
// name: EventCommand_RespondPlayerStats_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RespondPlayerStats_registerFactory(void) */

void EventCommand_RespondPlayerStats_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_RespondPlayerStats. It
                       binds id 0x20e to the allocation thunk for that class. */
  factoryFn = EventCommand_RespondPlayerStats_create;
  typeId_ = 0x20e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

