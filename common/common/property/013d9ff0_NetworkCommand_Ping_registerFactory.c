// addr: 0x013d9ff0
// name: NetworkCommand_Ping_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_Ping_registerFactory(void) */

void NetworkCommand_Ping_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the NetworkCommand_Ping command factory. The allocation thunk
                       constructs an object whose ctor sets NetworkCommand_Ping::vftable. */
  factoryFn = FUN_013d9f90;
  typeId_ = 0x70;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

