// addr: 0x014b1870
// name: SynchronizationCommand_RemoveInstances_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_RemoveInstances_registerFactory(void) */

void SynchronizationCommand_RemoveInstances_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_RemoveInstances with the component factory
                       under command/type id 0x8f, pairing the id with its allocator and then
                       finalizing the registration. */
  factoryFn = FUN_014b1810;
  typeId_ = 0x8f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

