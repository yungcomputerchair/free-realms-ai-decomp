// addr: 0x013d3230
// name: SynchronizationCommand_Update_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_Update_registerFactory(void) */

void SynchronizationCommand_Update_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the SynchronizationCommand_Update command factory. The allocation
                       thunk constructs an object with SynchronizationCommand_Update::vftable. */
  factoryFn = SynchronizationCommand_Update_create;
  typeId_ = 0x57;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

