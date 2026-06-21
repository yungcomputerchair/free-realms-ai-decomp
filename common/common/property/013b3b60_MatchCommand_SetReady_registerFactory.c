// addr: 0x013b3b60
// name: MatchCommand_SetReady_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_SetReady_registerFactory(void) */

void MatchCommand_SetReady_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the MatchCommand_SetReady factory callback. The callback allocates
                       0x10 bytes and constructs the command. */
  factoryFn = FUN_013b3b00;
  typeId_ = 99;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

