// addr: 0x013bd660
// name: UChatCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_registerFactory(void) */

void UChatCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the base UChatCommand factory callback. The callback allocates 0x44
                       bytes and constructs UChatCommand. */
  factoryFn = FUN_013bd600;
  typeId_ = 0x1f8;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

