// addr: 0x013d7e50
// name: PollCommand_AddPollControl_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PollCommand_AddPollControl_registerFactory(void) */

void PollCommand_AddPollControl_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PollCommand_AddPollControl command factory. The allocation
                       thunk constructs an object whose ctor sets
                       PollCommand_AddPollControl::vftable. */
  factoryFn = PollCommand_AddPollControl_create;
  typeId_ = 0x189;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

