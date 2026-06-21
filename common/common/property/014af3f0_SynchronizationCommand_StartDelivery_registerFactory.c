// addr: 0x014af3f0
// name: SynchronizationCommand_StartDelivery_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_StartDelivery_registerFactory(void) */

void SynchronizationCommand_StartDelivery_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_StartDelivery with the component factory
                       under command/type id 0x8d, pairing the id with its allocator and then
                       finalizing the registration. */
  factoryFn = FUN_014af390;
  typeId_ = 0x8d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

