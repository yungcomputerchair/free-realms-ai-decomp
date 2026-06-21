// addr: 0x014b2130
// name: SynchronizationCommand_AddNonTradable_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_AddNonTradable_registerFactory(void) */

void SynchronizationCommand_AddNonTradable_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_AddNonTradable with the component factory
                       under command/type id 0x12d, pairing the id with its allocator and then
                       finalizing the registration. */
  factoryFn = SynchronizationCommand_AddNonTradable_create;
  typeId_ = 0x12d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

