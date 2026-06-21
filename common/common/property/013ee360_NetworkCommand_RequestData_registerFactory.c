// addr: 0x013ee360
// name: NetworkCommand_RequestData_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_RequestData_registerFactory(void) */

void NetworkCommand_RequestData_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the NetworkCommand_RequestData command factory. The registered
                       constructor initializes NetworkCommand_RequestData::vftable and an integer
                       field. */
  factoryFn = NetworkCommand_RequestData_create;
  typeId_ = 0x23f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

