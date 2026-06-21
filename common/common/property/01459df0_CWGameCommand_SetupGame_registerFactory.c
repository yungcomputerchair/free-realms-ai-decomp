// addr: 0x01459df0
// name: CWGameCommand_SetupGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWGameCommand_SetupGame_registerFactory(void) */

void CWGameCommand_SetupGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWGameCommand_SetupGame factory callback with the
                       component/property factory registries. The callback at 01459d80 allocates the
                       object and calls the constructor at 01459a20. */
  factoryFn = FUN_01459d80;
  typeId_ = 0x222e7;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

