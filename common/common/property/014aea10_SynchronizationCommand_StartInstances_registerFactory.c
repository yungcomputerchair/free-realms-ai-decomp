// addr: 0x014aea10
// name: SynchronizationCommand_StartInstances_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_StartInstances_registerFactory(void) */

void SynchronizationCommand_StartInstances_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_StartInstances with the component factory
                       under command/type id 0x54, pairing the id with its allocator and then
                       finalizing the registration. */
  factoryFn = FUN_014ae9b0;
  typeId_ = 0x54;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

