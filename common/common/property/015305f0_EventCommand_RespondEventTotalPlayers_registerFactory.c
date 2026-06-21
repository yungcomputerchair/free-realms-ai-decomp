// addr: 0x015305f0
// name: EventCommand_RespondEventTotalPlayers_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RespondEventTotalPlayers_registerFactory(void) */

void EventCommand_RespondEventTotalPlayers_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_RespondEventTotalPlayers.
                       It binds id 0x208 to the small response command constructor thunk. */
  factoryFn = EventCommand_RespondEventTotalPlayers_create;
  typeId_ = 0x208;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

