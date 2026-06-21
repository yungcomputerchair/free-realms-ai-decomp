// addr: 0x01435610
// name: SynchronizationCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_registerFactory(void) */

void SynchronizationCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the SynchronizationCommand component factory for id 0x52 by passing
                       its allocator thunk to ComponentFactory_initSingleton and the secondary
                       registration helper. */
  factoryFn = SynchronizationCommand_create;
  typeId_ = 0x52;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

