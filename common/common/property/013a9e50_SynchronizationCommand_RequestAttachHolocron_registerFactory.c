// addr: 0x013a9e50
// name: SynchronizationCommand_RequestAttachHolocron_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_RequestAttachHolocron_registerFactory(void) */

void SynchronizationCommand_RequestAttachHolocron_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory callback for
                       SynchronizationCommand_RequestAttachHolocron. The callback allocates 0x0c
                       bytes and constructs that command class. */
  factoryFn = FUN_013a9df0;
  typeId_ = 0x23b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

