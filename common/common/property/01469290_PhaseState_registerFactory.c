// addr: 0x01469290
// name: PhaseState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PhaseState_registerFactory(void) */

void PhaseState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PhaseState factory callback with the component/property factory
                       registries. The callback at 01469220 allocates the object and calls the
                       constructor at 01469120. */
  factoryFn = PhaseState_create;
  typeId_ = 0x176;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

