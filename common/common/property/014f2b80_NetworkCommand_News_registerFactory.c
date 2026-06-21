// addr: 0x014f2b80
// name: NetworkCommand_News_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_News_registerFactory(void) */

void NetworkCommand_News_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_News under type id 0x1c9
                       and installs the allocator callback. */
  factoryFn = NetworkCommand_News_create;
  typeId_ = 0x1c9;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

