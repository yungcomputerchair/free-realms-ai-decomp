// addr: 0x013ef130
// name: NetworkCommand_Disconnect_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_Disconnect_registerFactory(void) */

void NetworkCommand_Disconnect_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the NetworkCommand_Disconnect command factory. The registered
                       constructor path sets NetworkCommand_Disconnect::vftable and initializes
                       string fields. */
  factoryFn = FUN_013ef0d0;
  typeId_ = 0x116;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

