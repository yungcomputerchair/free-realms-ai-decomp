// addr: 0x01380890
// name: Archetype_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Archetype_registerFactory(void) */

void Archetype_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Archetype factory callback in the property/component factory
                       registries. The callback allocates 0x34 bytes and constructs an Archetype. */
  factoryFn = FUN_01380830;
  typeId_ = 3;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

