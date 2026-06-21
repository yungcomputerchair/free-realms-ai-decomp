// addr: 0x01471cf0
// name: DrawCardState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DrawCardState_registerFactory(void) */

void DrawCardState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the DrawCardState factory callback with the component/property
                       factory registries. The callback at 01471c80 allocates the object and calls
                       the constructor at 01471b20. */
  factoryFn = DrawCardState_create;
  typeId_ = 0x16d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

