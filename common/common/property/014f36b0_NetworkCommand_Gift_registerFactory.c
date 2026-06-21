// addr: 0x014f36b0
// name: NetworkCommand_Gift_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_Gift_registerFactory(void) */

void NetworkCommand_Gift_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_Gift under type id 0x1a0
                       and installs the allocator callback. */
  factoryFn = NetworkCommand_Gift_create;
  typeId_ = 0x1a0;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

