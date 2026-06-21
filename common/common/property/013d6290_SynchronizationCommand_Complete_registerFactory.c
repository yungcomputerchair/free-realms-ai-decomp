// addr: 0x013d6290
// name: SynchronizationCommand_Complete_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_Complete_registerFactory(void) */

void SynchronizationCommand_Complete_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the SynchronizationCommand_Complete command factory. The registered
                       ctor initializes SynchronizationCommand_Complete::vftable and its integer
                       field. */
  factoryFn = SynchronizationCommand_Complete_create;
  typeId_ = 0x56;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

