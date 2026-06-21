// addr: 0x014b1db0
// name: SynchronizationCommand_ProcessFulfillment_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_ProcessFulfillment_registerFactory(void) */

void SynchronizationCommand_ProcessFulfillment_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_ProcessFulfillment with the component
                       factory under command/type id 0x8e, pairing the id with its allocator and
                       then finalizing the registration. */
  factoryFn = FUN_014b1d50;
  typeId_ = 0x8e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

