// addr: 0x014f1630
// name: NetworkCommand_SystemMessage_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_SystemMessage_registerFactory(void) */

void NetworkCommand_SystemMessage_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_SystemMessage under type
                       id 0x88 and installs the allocator callback. */
  factoryFn = NetworkCommand_SystemMessage_create;
  typeId_ = 0x88;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

