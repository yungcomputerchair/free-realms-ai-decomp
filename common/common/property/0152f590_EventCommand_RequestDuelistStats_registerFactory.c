// addr: 0x0152f590
// name: EventCommand_RequestDuelistStats_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RequestDuelistStats_registerFactory(void) */

void EventCommand_RequestDuelistStats_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_RequestDuelistStats. The
                       registered thunk allocates the minimal request object and sets its vtable. */
  factoryFn = EventCommand_RequestDuelistStats_create;
  typeId_ = 0x20f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

