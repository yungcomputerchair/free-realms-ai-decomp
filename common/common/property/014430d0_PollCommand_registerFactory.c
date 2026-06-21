// addr: 0x014430d0
// name: PollCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PollCommand_registerFactory(void) */

void PollCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PollCommand component factory for id 0x187 by passing its
                       allocator thunk to ComponentFactory_initSingleton and the secondary
                       registration helper. */
  factoryFn = PollCommand_create;
  typeId_ = 0x187;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

