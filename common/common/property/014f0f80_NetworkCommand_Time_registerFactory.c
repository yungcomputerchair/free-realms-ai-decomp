// addr: 0x014f0f80
// name: NetworkCommand_Time_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_Time_registerFactory(void) */

void NetworkCommand_Time_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_Time under type id 0x138
                       and installs the allocator callback. */
  factoryFn = NetworkCommand_Time_create;
  typeId_ = 0x138;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

