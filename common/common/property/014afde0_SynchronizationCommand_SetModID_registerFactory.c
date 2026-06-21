// addr: 0x014afde0
// name: SynchronizationCommand_SetModID_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_SetModID_registerFactory(void) */

void SynchronizationCommand_SetModID_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_SetModID with the component factory under
                       command/type id 0x13c, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = FUN_014afd80;
  typeId_ = 0x13c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

