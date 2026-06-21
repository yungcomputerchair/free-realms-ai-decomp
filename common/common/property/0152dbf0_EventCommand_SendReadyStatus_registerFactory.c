// addr: 0x0152dbf0
// name: EventCommand_SendReadyStatus_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_SendReadyStatus_registerFactory(void) */

void EventCommand_SendReadyStatus_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory constructor for EventCommand_SendReadyStatus.
                       The thunk creates the small ready-status event command object. */
  factoryFn = EventCommand_SendReadyStatus_create;
  typeId_ = 0x211;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

