// addr: 0x0152ef80
// name: EventCommand_RespondDuelistStats_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RespondDuelistStats_registerFactory(void) */

void EventCommand_RespondDuelistStats_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_RespondDuelistStats. It
                       maps id 0x210 to the constructor thunk for this event command. */
  factoryFn = FUN_0152ef20;
  typeId_ = 0x210;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

