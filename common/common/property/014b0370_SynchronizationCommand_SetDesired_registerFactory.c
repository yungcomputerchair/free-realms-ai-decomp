// addr: 0x014b0370
// name: SynchronizationCommand_SetDesired_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_SetDesired_registerFactory(void) */

void SynchronizationCommand_SetDesired_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_SetDesired with the component factory under
                       command/type id 0x10f, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014b0310;
  typeId_ = 0x10f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

