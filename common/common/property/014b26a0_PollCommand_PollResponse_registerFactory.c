// addr: 0x014b26a0
// name: PollCommand_PollResponse_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PollCommand_PollResponse_registerFactory(void) */

void PollCommand_PollResponse_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers PollCommand_PollResponse with the component factory under
                       command/type id 0x18a, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = PollCommand_PollResponse_create;
  typeId_ = 0x18a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

