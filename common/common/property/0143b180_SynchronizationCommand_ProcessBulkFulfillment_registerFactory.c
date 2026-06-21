// addr: 0x0143b180
// name: SynchronizationCommand_ProcessBulkFulfillment_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_ProcessBulkFulfillment_registerFactory(void) */

void SynchronizationCommand_ProcessBulkFulfillment_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the SynchronizationCommand_ProcessBulkFulfillment component factory
                       for id 0x139 by passing its allocator thunk to ComponentFactory_initSingleton
                       and the secondary registration helper. */
  factoryFn = SynchronizationCommand_ProcessBulkFulfillment_create;
  typeId_ = 0x139;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

