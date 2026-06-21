// addr: 0x014889a0
// name: ValueNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ValueNode_registerFactory(void) */

void ValueNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ValueNode factory callback with the component/property factory
                       registries. The callback at 01488940 allocates the object and calls the
                       constructor at 014882c0. */
  factoryFn = FUN_01488940;
  typeId_ = 0x28;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

