// addr: 0x0152fc50
// name: EventCommand_SendByeNotification_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_SendByeNotification_registerFactory(void) */

void EventCommand_SendByeNotification_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory constructor for
                       EventCommand_SendByeNotification. The constructor thunk initializes integer
                       fields and an empty string member. */
  factoryFn = EventCommand_SendByeNotification_create;
  typeId_ = 0x20b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

