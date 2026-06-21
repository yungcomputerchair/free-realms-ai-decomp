// addr: 0x01459950
// name: CWMatchCommand_LaunchGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWMatchCommand_LaunchGame_registerFactory(void) */

void CWMatchCommand_LaunchGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWMatchCommand_LaunchGame factory callback with the
                       component/property factory registries. The callback at 014598f0 allocates the
                       object and calls the constructor at 014595a0. */
  factoryFn = CWMatchCommand_LaunchGame_create;
  typeId_ = 0x222e8;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

