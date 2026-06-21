// addr: 0x014f8fe0
// name: Guild_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Guild_registerFactory(void) */

void Guild_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for Guild under type id 0x184 and installs
                       the allocator callback. */
  factoryFn = Guild_create;
  typeId_ = 0x184;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

