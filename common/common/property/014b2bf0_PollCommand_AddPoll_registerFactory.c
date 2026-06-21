// addr: 0x014b2bf0
// name: PollCommand_AddPoll_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PollCommand_AddPoll_registerFactory(void) */

void PollCommand_AddPoll_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers PollCommand_AddPoll with the component factory under command/type
                       id 0x188, pairing the id with its allocator and then finalizing the
                       registration. */
  factoryFn = PollCommand_AddPoll_create;
  typeId_ = 0x188;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

