// addr: 0x014542e0
// name: CWSumExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWSumExpression_registerFactory(void) */

void CWSumExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWSumExpression factory callback with the component/property
                       factory registries. The callback at 01454280 allocates the object and calls
                       the constructor at 014540e0. */
  factoryFn = CWSumExpression_create;
  typeId_ = 0x222f2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

