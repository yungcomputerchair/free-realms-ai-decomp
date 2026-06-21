// addr: 0x0152d840
// name: EventCommand_SendEventPlayerFlags_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_SendEventPlayerFlags_registerFactory(void) */

void EventCommand_SendEventPlayerFlags_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_SendEventPlayerFlags. It
                       associates id 0x212 with the allocator/constructor thunk. */
  factoryFn = EventCommand_SendEventPlayerFlags_create;
  typeId_ = 0x212;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

