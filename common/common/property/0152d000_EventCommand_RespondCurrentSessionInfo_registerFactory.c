// addr: 0x0152d000
// name: EventCommand_RespondCurrentSessionInfo_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RespondCurrentSessionInfo_registerFactory(void) */

void EventCommand_RespondCurrentSessionInfo_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_RespondCurrentSessionInfo.
                       It binds id 0x215 to the allocator thunk for that event command. */
  factoryFn = EventCommand_RespondCurrentSessionInfo_create;
  typeId_ = 0x215;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

