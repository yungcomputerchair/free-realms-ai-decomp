// addr: 0x01535940
// name: EventCommand_SetReady_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_SetReady_registerFactory(void) */

void EventCommand_SetReady_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_SetReady. It binds id
                       0x1df to the small SetReady allocation thunk. */
  factoryFn = EventCommand_SetReady_create;
  typeId_ = 0x1df;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

