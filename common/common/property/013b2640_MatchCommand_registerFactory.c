// addr: 0x013b2640
// name: MatchCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_registerFactory(void) */

void MatchCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the base MatchCommand factory callback. The callback allocates 0x0c
                       bytes and constructs MatchCommand. */
  factoryFn = FUN_013b25e0;
  typeId_ = 0x62;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

