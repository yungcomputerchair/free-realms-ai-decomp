// addr: 0x014b11c0
// name: SynchronizationCommand_RemoveNonTradable_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_RemoveNonTradable_registerFactory(void) */

void SynchronizationCommand_RemoveNonTradable_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_RemoveNonTradable with the component factory
                       under command/type id 0x12e, pairing the id with its allocator and then
                       finalizing the registration. */
  factoryFn = SynchronizationCommand_RemoveNonTradable_create;
  typeId_ = 0x12e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

