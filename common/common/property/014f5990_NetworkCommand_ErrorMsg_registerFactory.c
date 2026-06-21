// addr: 0x014f5990
// name: NetworkCommand_ErrorMsg_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_ErrorMsg_registerFactory(void) */

void NetworkCommand_ErrorMsg_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_ErrorMsg under type id
                       0x6b and installs the allocator callback. */
  factoryFn = NetworkCommand_ErrorMsg_create;
  typeId_ = 0x6b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

