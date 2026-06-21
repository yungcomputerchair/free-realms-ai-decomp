// addr: 0x014f19c0
// name: NetworkCommand_SessionKick_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void NetworkCommand_SessionKick_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_SessionKick under type id
                       0x1fb; installs allocator FUN_014f1960 whose ctor sets
                       NetworkCommand_SessionKick::vftable. */
  factoryFn = NetworkCommand_SessionKick_create;
  typeId_ = 0x1fb;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

