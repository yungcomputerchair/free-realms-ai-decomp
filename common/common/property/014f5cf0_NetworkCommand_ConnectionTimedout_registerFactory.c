// addr: 0x014f5cf0
// name: NetworkCommand_ConnectionTimedout_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_ConnectionTimedout_registerFactory(void) */

void NetworkCommand_ConnectionTimedout_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_ConnectionTimedout under
                       type id 0x86 and installs the allocator callback. */
  factoryFn = NetworkCommand_ConnectionTimedout_create;
  typeId_ = 0x86;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

