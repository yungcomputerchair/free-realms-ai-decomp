// addr: 0x01534c00
// name: EventCommand_RequestEventTotalPlayers_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RequestEventTotalPlayers_registerFactory(void) */

void EventCommand_RequestEventTotalPlayers_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory constructor for
                       EventCommand_RequestEventTotalPlayers. It maps id 0x205 to the minimal
                       request command constructor thunk. */
  factoryFn = EventCommand_RequestEventTotalPlayers_create;
  typeId_ = 0x205;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

