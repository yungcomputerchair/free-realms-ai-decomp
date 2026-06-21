// addr: 0x0139e0b0
// name: PlayArea_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PlayArea_registerFactory(void) */

void PlayArea_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PlayArea factory callback with the property/component factory
                       registries. The callback allocates 0x48 bytes and constructs PlayArea. */
  factoryFn = PlayArea_createEmbedded;
  typeId_ = 0xac;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

