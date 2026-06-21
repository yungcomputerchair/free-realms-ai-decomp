// addr: 0x014f53d0
// name: NetworkCommand_EULA_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_EULA_registerFactory(void) */

void NetworkCommand_EULA_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_EULA under type id 0x1c8
                       and installs the allocator callback. */
  factoryFn = NetworkCommand_EULA_create;
  typeId_ = 0x1c8;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

