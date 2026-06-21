// addr: 0x014709e0
// name: GetTopCardState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GetTopCardState_registerFactory(void) */

void GetTopCardState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the GetTopCardState factory callback with the component/property
                       factory registries. The callback at 01470970 allocates the object and calls
                       the constructor at 01470890. */
  factoryFn = GetTopCardState_create;
  typeId_ = 0x1b4;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

