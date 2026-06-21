// addr: 0x0148e010
// name: SumExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SumExpression_registerFactory(void) */

void SumExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the SumExpression factory callback with the component/property
                       factory registries. The callback at 0148dfb0 allocates the object and calls
                       the constructor at 0148dcd0. */
  factoryFn = SumExpression_create;
  typeId_ = 0x170;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

