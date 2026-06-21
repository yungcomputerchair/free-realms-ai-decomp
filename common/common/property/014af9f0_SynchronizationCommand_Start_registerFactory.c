// addr: 0x014af9f0
// name: SynchronizationCommand_Start_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_Start_registerFactory(void) */

void SynchronizationCommand_Start_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_Start with the component factory under
                       command/type id 0x53, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014af990;
  typeId_ = 0x53;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

