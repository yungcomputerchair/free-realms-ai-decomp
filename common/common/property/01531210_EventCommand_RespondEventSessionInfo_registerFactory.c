// addr: 0x01531210
// name: EventCommand_RespondEventSessionInfo_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RespondEventSessionInfo_registerFactory(void) */

void EventCommand_RespondEventSessionInfo_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_RespondEventSessionInfo.
                       The target constructor initializes strings, containers, and scalar fields for
                       the session-info response. */
  factoryFn = FUN_015311b0;
  typeId_ = 0x207;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

