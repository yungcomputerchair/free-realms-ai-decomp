// addr: 0x014f0850
// name: NetworkCommand_UpdateDataVersion_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_UpdateDataVersion_registerFactory(void) */

void NetworkCommand_UpdateDataVersion_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_UpdateDataVersion under
                       type id 0x222 and installs the allocator callback. */
  factoryFn = FUN_014f07f0;
  typeId_ = 0x222;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

