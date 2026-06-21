// addr: 0x014f0240
// name: NetworkCommand_UpdateLag_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_UpdateLag_registerFactory(void) */

void NetworkCommand_UpdateLag_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_UpdateLag under type id
                       0x69 and installs the allocator callback. */
  factoryFn = NetworkCommand_UpdateLag_create;
  typeId_ = 0x69;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

