// addr: 0x014ae480
// name: SynchronizationCommand_ChangeFlags_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_ChangeFlags_registerFactory(void) */

void SynchronizationCommand_ChangeFlags_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_ChangeFlags with the component factory under
                       command/type id 0x1db, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014ae420;
  typeId_ = 0x1db;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

