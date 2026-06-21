// addr: 0x0148ead0
// name: SubtractExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SubtractExpression_registerFactory(void) */

void SubtractExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the SubtractExpression factory callback with the component/property
                       factory registries. The callback at 0148ea70 allocates the object and calls
                       the constructor at 0148e7e0. */
  factoryFn = SubtractExpression_create;
  typeId_ = 0x25;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

