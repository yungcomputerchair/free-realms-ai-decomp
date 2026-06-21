// addr: 0x014f1e30
// name: NetworkCommand_QueryDisconnect_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_QueryDisconnect_registerFactory(void) */

void NetworkCommand_QueryDisconnect_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the NetworkCommand_QueryDisconnect factory callback under type id
                       0x85. */
  factoryFn = NetworkCommand_QueryDisconnect_create;
  typeId_ = 0x85;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

