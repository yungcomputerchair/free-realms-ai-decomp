// addr: 0x013441a0
// name: PlayElement_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PlayElement_registerFactory(void) */

void PlayElement_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PlayElement factory callback in the object factory tables. The
                       callback constructs a PlayElement and returns the adjusted
                       persistent-component subobject pointer. */
  factoryFn = FUN_01344120;
  typeId_ = 0xa7;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

